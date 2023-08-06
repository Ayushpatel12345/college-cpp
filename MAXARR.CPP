#include<iostream.h>
#include<conio.h>
void  main()
{
   int a[5],i,max,n;
   cout<<"\n how many enter  elements=";
   cin>>n;
   cout<<"\n enter elements";
   for(i=0;i<n;i++)
   {
      cin>>a[i];
   }
     max=a[0];
     for(i=0;i<n;i++)
     {
	if(max<a[i])
	max=a[i];
     }
   cout<<"max number="<<max;
   getch();
}