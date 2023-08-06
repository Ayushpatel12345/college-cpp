#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
   char ch;
   cout<<"\n\n enter information=";
   cin>>ch;
   if(ch>=65 && ch<=90 || ch>=97 && ch<=122)
   {
     cout<<"alphabet";
   }
   else if(ch>=48 && ch<=57)
   {
      cout<<"digit";
   }
   else
   {
      cout<<"symbol";
   }
getch();
}