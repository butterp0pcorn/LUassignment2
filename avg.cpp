// Write a program to print total and average of 1 to 10 using all loops.
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int i, temp;
    float sum, avg;
    i = 0;
    while(i<=10)
    {
        temp = i++;
        sum = temp+sum;
    }
    cout<<endl<<"The sum of numbers from 1 to 10 is "<<sum<<endl;
    avg = sum/10;
    cout<<endl<<"The average of the sum is "<<avg<<endl;
}