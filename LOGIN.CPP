#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
 char u[100]="abc@gmail.com",p[100]="12345";
 char u1[100],p1[100];
 cout<<"\n enter username:";
 cin>>u1;
 cout<<"\n enter password:";
 cin>>p1;
 if(strcmp(u,u1)==0 && strcmp(p,p1)==0)
 {
   cout<<"login sucessfully";
 }
 else
 {
   cout<<"login  not sucessfully";
 }
getch();
}
