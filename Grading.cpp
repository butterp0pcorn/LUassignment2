/* A school has following rules for grading system:
a. Below 25 - F
b. 25 to 45 - E
c. 45 to 50 - D
d. 50 to 60 - C
e. 60 to 80 - B
 f. Above 80 - A
Ask user to enter marks and print the corresponding grade. */
#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter the marks obtained: "<<endl;
    cin>>marks;
    if(marks<25)
    {
        cout<<"Your grade if F, you would need to re-write the exam.";
    } else if(marks>25 && marks<=45) {
        cout<<"Your grade is E, Please try to do better next time.";
    } else if(marks>45 && marks<=50) {
        cout<<"Your grade is D, Good job!";
    } else if(marks>50 && marks<=60) {
        cout<<"Your grade is C, Well done!";
    } else if(marks>60 && marks<=80) {
        cout<<"Your grade is B, You are a bright child"; 
    } else{
        cout<<"Your grade is A, You need step out also sometimes.";
    }
    return 0;
}