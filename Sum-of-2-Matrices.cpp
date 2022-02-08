//Find the sum of two matrices of 3X3 order.
#include<iostream>
using namespace std;
main()
{
	

  int A[3][3],B[3][3],C[3][3],i,j;
  
  cout<<"Enter Numbers for 1st matrix"<<endl;
   for(i=0;i<=2;i++)
     for(j=0;j<=2;j++)
  	       cin>>A[i][j];
  	         cout<<endl;
  
  
  
   cout<<"Enter Numbers for 2nd matrix"<<endl;
    for(i=0;i<=2;i++)
      for(j=0;j<=2;j++)
  	       cin>>B[i][j];
  	         cout<<endl;
   
   cout<<"Sum is"<<endl;
    for(i=0;i<=2;i++)
  { 
  for(j=0;j<=2;j++)
  {
  	
  	C[i][j]=A[i][j]+B[i][j];
  	cout<<" "<<" "<<" "<<C[i][j]<<" ";
}
cout<<endl;

  }
}
  
