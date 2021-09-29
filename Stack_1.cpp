#include<iostream>
#include<stdlib.h>
using namespace std;

int top=-1;
int position;
int stack[10];

bool isEmpty()
{
	if(top==-1)
	return true;
	else
	return false;
	
}
bool isFull()
{
	if(top==9)
	return true;
	else 
	return false;
}
void push(int val)
{
	if(isFull())
	cout<<"Stack Overflow";
	else
	{
		top++;
		stack[top]=val;
	}
}
int pop()
{
	int x;
	if(isEmpty())
	cout<<"Stack Underflow";
	else
	{
		x =stack[top];
		top--;
	}
	return x;
}
int peek(int pos)
{
	int y=stack[pos];
	return y;
}
int count()
{
	int cont;
	cont = top+1;
	return cont;
}
int change(int val, int pos)
{
	stack[pos]=val;
	cout<<"The value on Position "<<pos<<" is replaced by "<<val<<endl;
}
void display()
{
	for(int i=9;i>=0;i--)
	cout<<stack[i]<<endl;
}
int main()
{
	
	while(1)
	{
	int option;
	cout<<"\nSelect One of the options below: "<<endl;
	cout<<"1. To push an element in stack"<<endl;
	cout<<"2. To pop an element from the stack"<<endl;
	cout<<"3. Display all elements of the stack"<<endl;
	cout<<"4. To Fetch the value at any position"<<endl;
	cout<<"5. To Count the number of element in the stack"<<endl;
	cout<<"6. To Change the value at any position"<<endl;
	cout<<"7. Exit"<<endl;
	cin>>option;
	switch(option)
	{
		case 1:
		int value;
		cout<<"Enter element You want to push in the stack\n";
		cin>>value;
		push(value);
		break;
		
		case 2:
		cout<<" poped element is "<<pop();
		break;
      
       case 3:
       	display();
       	break;
       
       case 4:
       	int pos;
       	cout<<"Enter the Position you want to fetch"<<endl;
       	cin>>pos;
       	cout<<"The value is "<<peek(pos);
       	break;
       	
       case 5:
       	cout<<"The Total Element in the Stack is"<<count();
       	break;
    
       case 6:
       	int val1,pos1;
       	cout<<"Enter the Value to be changed "<<endl;
       	cin>>val1;
       	cout<<"at what position"<<endl;
       	cin>>pos1;
		change(val1,pos1);
		break;
		
	   case 7:
	   	exit(0);
	   	break;


	}
}

}

