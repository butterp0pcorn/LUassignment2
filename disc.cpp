// A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
// Ask user for quantity
// Suppose, one unit will cost 100.
// Judge and print total cost for user.
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
   system ("CLS");
   int quan, tot, disc, newtot;
   cout<<"THE 100 Store"<<endl; 
   cout<<"How many items you want to purchase?"<<endl;
   cin>>quan;
   tot = quan*100;
   if(tot>=1000)
   {
       disc = (tot/100)*10;
       newtot = tot-disc;
       cout<<"Total amount due is "<<newtot<<endl;
   } else {
       cout<<"Total amount due is "<<tot<<endl;
   }
   return 0;
}