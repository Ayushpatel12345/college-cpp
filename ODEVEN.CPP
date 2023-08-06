#include<iostream.h>
#include<conio.h>
void  main()
{
   int a[10],i,n;
   cout<<"\n how many enter elements=";
   cin>>n;
   for(i=0;i<n;i++)
   {
      cin>>a[i];
   }
  // cout<<"enter odd number=";
 //  for(i=0;i<n;i++)
  // if(a[i]%2!=0)
   cout<<"enter even number=";
   for(i=0;i<n;i++)
   if(a[i]%2==0)
   {
     cout<<a[i]<<" ";
   }
getch();
}