#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;c
void main()
{
   char ch[100];
   int alpha=0,i;
   cout<<"\n\n enter information=";
   cin>>ch;
   for(i=0;ch[i]!='\0';i++)
   if(ch>=65 && ch<=90 || ch>=97 && ch<=122)
   alpha++;
   {
     cout<<"total alphabet="<<alpha;
   }
getch();
}