#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
   char s[100],rev[100];
   cout<<"\n\n enter information=";
   cin>>s;
   strcpy(rev,s);
   strrev(rev);
   if(strcmp(s,rev)==0)
   cout<<"\n it is palidrome";
   else
   cout<<"\n it is not palidrome";
   getch();
}