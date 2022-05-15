// Write a program to print even no between 1 to 10 using all loops
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("CLS");
    int i;
    cout<<"From the numbers between 1 & 10:"<<endl;
    for(i=1; i<=10; i++)
    {
        if(i%2==0)
        cout<<i<<" is an even number."<<endl;
    }
    return 0;
}