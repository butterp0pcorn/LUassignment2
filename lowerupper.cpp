// Write a program to check whether a entered character is lowercase ( a to z ) or uppercase ( A to Z ).
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{   
    system("CLS");
    char al; 
    cout<<"Please enter an alphabet to dertermine if its an upper or lower case: "<<endl;
        cin>>al;
        if(al>=65 && al<=90){       //used ASCII value for determinig the lowercase
          cout<<"It's an Uppercase alphabet."<<endl;
    }
  else if(al>=97 && al<=122){       //used ASCII value for determinig the uppercase
        cout<<"It's an Lowercase alphabet."<<endl;
    }
   else {
         cout<<"Please enter an alphabet only."<<endl; 
    }
    return 0;
}