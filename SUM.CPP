// array of sum
#include<iostream.h>
#include<conio.h>
void main()
{
  int a[5],i,n,sum=0;
  cout<<"\n enter elements";
  cin>>n;
  for(i=0;i<5;i++)
  {
     cin>>a[i];
     sum=sum+a[i];
  }
  {
  cout<<"the sum of array="<<sum;
  }
  getch();
}

