#include<iostream.h>
#include<conio.h>
void main()
{
    int i,n,j;
    cout<<"\n enter number=";
    cin>>n;
    for(i=1;i<=n;i++)
    {
	 for(j=1;j<=i;j++)
      {
	 if(i==n ||i==j ||j==1)
	 {
		 cout<<"*";
	 }
	 else
	{
	   cout<<" ";
	}
      }
      cout<<"\n";
    }
  //   +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    cout<<"\n enter number=";
    cin>>n;
    for(i=1;i<=n;i++)
    {
	 for(j=1;j<=n;j++)
      {
	 if(i==1 ||i==n ||j==1 || j==n)
	 {
		 cout<<"*";
	 }
	 else
	{
	   cout<<" ";
	}
      }
      cout<<"\n";
    }
getch();
}


