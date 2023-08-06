#include<iostream.h>
#include<conio.h>
void main()
{
   int a[10],i,j,temp=0,n;
   clrscr();
   cout<<"\n enter array elements:";
   cin>>n;
   cout<<"\n enter elements=";
   for(i=0;i<n;i++)
   {
      cin>>a[i];
   }
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
	  if(a[i]>a[j])
	  {
	    temp=a[i];
	    a[i]=a[j];
	    a[j]=temp;
	  }
       }
    }
    cout<<"\n enter elements=";
    for(i=0;i<n;i++)
    {
     cout<<a[i]<<" ";
    }
   getch();
}

