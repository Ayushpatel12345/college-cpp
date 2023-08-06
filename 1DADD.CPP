#include<iostream.h>
#include<conio.h>
void main()
{
  int a[50],b[50],c[50],k,n,i,j;
  cout<<"how many enter you number=";
  cin>>n;
  cout<<"enter 1st elements";
  for(i=0;i<n;i++)
  cin>>a[i];
  cout<<"enter 2nd elements";
  for(j=0;j<n;j++)
  cin>>b[j];
  cout<<"addition of first and second array";
  for(k=0;k<n;k++)
  {
  c[k]=a[k]+b[k];
  cout<<c[k]<<" ";
  }
  getch();
}