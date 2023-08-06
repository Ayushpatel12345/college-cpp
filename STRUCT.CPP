#include<iostream.h>
#include<conio.h>
struct arthimetic
{
 int x;
 int y;
 int z;
};
void main()
{
struct arthimetic e;
cout<<"\n\n  enter 1st number=";
cin>>e.y;
cout<<"enter 2nd number=";
cin>>e.z;
e.x=e.y-e.z;
cout<<"\n sub="<<e.x;
getch();
}
