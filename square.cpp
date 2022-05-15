// Take values of length and breadth of a rectangle from user and check if it is square or not?
#include<iostream>
using namespace std;
int main()
{
    system ("CLS");
    int l, b;
    cout<<"Enter the length of the geometric shape: "<<endl;
    cin>>l;
    cout<<"Enter the breadth of the geometric shape: "<<endl;
    cin>>b;
    if(l==b)
    {
        cout<<"It is a square."<<endl;
    } else
    {
        cout<<"It is not a square"<<endl;
    }
    return 0;
}