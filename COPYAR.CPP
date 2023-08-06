#include<iostream.h>
#include<conio.h>
void main()
{
  int a[5]={11,22,33,44,55},i,j;
  int b[5];
  cout<<"\n\n enter 1st array is given below=";
  for(i=0;i<5;i++)
  {
  cout<<a[i]<<" ";
  }
  cout<<"\n enter after copy array=";
  for(j=0;j<5;j++)
  {
    cout<<a[j]<<" ";
  }
  getch();
}