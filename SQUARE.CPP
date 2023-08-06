#include<iostream.h>
#include<conio.h>
void main()
{                                       /*abc*/
       int i,n,j;
	char ch='a';
	clrscr();                          /* $ cout<<ch<<" ";   */
	cout<<"\n enter a number=";        /* $ ch++; abc        */
	cin>>n;                            /* . cout<<"\n";      */
	for(i=1;i<=n;i++)                  /* . ch++; aaa        */
	{
	    for(j=1;j<=n;j++)
	   {
		      cout<<ch<<" ";
		      ch++;
	   }
	    cout<<"\n";
	}
       /*	+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	int i,n,j;                         *aaa*
	char ch='a';
	cout<<"\n enter a number=";
	cin>>n;
	for(i=1;i<=n;i++)
	{
	    for(j=1;j<=n;j++)
	   {
		      cout<<ch<<" ";
	   }
	    cout<<"\n";
	    ch++;
	 }*/
getch();
}