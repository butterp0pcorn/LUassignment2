// A student will not be allowed to sit in exam if his/her attendence is less than 75%.
// Take following input from user
// Number of classes held
// Number of classes attended.
// And print
// percentage of class attended
// Is student is allowed to sit in exam or not.
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system ("CLS");
    int attnd, avg, classes=180;
    cout<<"The total number of classes held this semester is 180."<<endl;
    cout<<"How many classes did you attend?"<<endl;
    cin>>attnd;
    avg = (attnd*100)/classes;
    cout<<endl<<"You attendance is "<<avg<<"%"<<endl;
    if(avg>=75)
    cout<<"You may enter the examination hall.";
    else
    cout<<"Your attendance is lesser than 75%, you would not be allowed to write the exam.";

    return 0;
}