#include<iostream.h>
#include<conio.h>
void main()
{
 int i,n,j,k,s;
 clrscr();
 cout<<"\n enter number";
 cin>>n;
 for(i=1;i<=n;i++)
 {
  for(s=1;s<=n-i;s++)
  {
     cout<<" ";
  }
  for(j=1;j<=i;j++)
  {
     cout<<"*";
  }
  for(k=2;k<=i;k++)
  {
    cout<<"*";
  }
    cout<<"\n";
  }
  for(i=n-1;i>=1;i--)
  {
    for(s=1;s<=n-i;s++)
  {
     cout<<" ";
  }
  for(j=1;j<=i;j++)
  {
     cout<<"*";
  }
  for(k=2;k<=i;k++)
  {
     cout<<"*";
  }
  cout<<"\n";
 }
getch();
}