#include<iostream.h>
#include<conio.h>
void main()
{
	int i,n,j,c,s;
	char ch='a';
	clrscr();
	cout<<"\n enter a number";
	cin>>n;
	for(i=1;i<=n;i++)
    {
	for(s=1;s<=n-i;s++)
	   cout<<" ";
       {
	   for(j=1;j<=i;j++)
	   {
	     cout<<ch<<" ";
	     ch++;
	   }
	    cout<<"\n";
	}
     }

getch();
}