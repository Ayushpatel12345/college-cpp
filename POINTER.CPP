#include<iostream.h>
#include<conio.h>
void main()
{
  int a,b,c;
  int *p,*q,*r;
  p=&a;
  q=&b;
  r=&c;
  cout<<"\n\n  enter 1st number=";
  cin>>*q;
  cout<<"\n enter 2nd number=";
  cin>>*r;
  *p=*q+*r;
  cout<<"\n add="<<*p;
getch();
}
