#include<iostream.h>
#include<conio.h>
void main()
{
  int i,n,j;
  cout<<"\enetr number=";
  cin>>n;
  for(i=1;i<=n;i++)
  {
    for(j=n;j>=i;j--)
    {
       cout<<"*";
    }
    cout<<"\n";
  }
getch();
}