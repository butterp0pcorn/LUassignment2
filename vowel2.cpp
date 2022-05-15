// Write a program to check if entered character is vowel using switch case.
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("CLS");
    char alpha;
    cout<<"Enter the chracter to check if it's a vowel."<<endl;
    cin>>alpha;
    cout<<endl;

    switch(alpha)
    {
        case 'a':
            cout<<alpha<<" is a lowercase vowel."<<endl;
            break;
        case 'e':
            cout<<alpha<<" is a lowercase vowel."<<endl;
            break;
        case 'i':
            cout<<alpha<<" is a lowercase vowel."<<endl;
            break;
        case 'o':
            cout<<alpha<<" is a lowercase vowel."<<endl;
            break;
        case 'u':
            cout<<alpha<<"It's a lowercase vowel."<<endl;
            break;
        case 'A':
            cout<<alpha<<" is an uppercase vowel."<<endl;
            break;
        case 'E':
            cout<<alpha<<" is an uppercase vowel."<<endl;
            break;
        case 'I':
            cout<<alpha<<" is an uppercase vowel."<<endl;
            break;
        case 'O':
            cout<<alpha<<" is an uppercase vowel."<<endl;
            break;
        case 'U':
            cout<<alpha<<" is an uppercase vowel."<<endl;
            break;
        default:
            cout<<"It is a consonant"<<endl;
    }
    return 0;
}
