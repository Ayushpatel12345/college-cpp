#include<iostream.h>
#include<conio.h>
void  main()
{
   float sp,cp,profit,loss;
   cout<<"\n\n enter sell price :";
   cin>>sp;
   cout<<"\n  enter cost price:";
   cin>>cp;
   if(sp>cp)
   {
	 profit=sp-cp;
	 cout<<"\n profit is ruppe="<<profit;
   }
   else if(cp>sp)
   {
	 loss=cp-sp;
	 cout<<"\n loss is  ruppe="<<loss;
   }
   else
   {
      cout<<"equal rupee";
   }
   getch();

}