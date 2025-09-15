// Write a program that reads two integers from the user 
// and determines if the first integer is divisible by the second 
// integer.
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the first value of integer  : ";
    cin>>a;
    cout<<endl;
    cout<<"Enter the Second value of integer  : ";
    cin>>b;
        if (b == 0) {
        cout << "Division by zero is not allowed." << endl;
    } else if (a %b == 0) {
        cout <<a << " is divisible by " << b<< "." << endl;
    } else {
        cout <<a << " is not divisible by " << b << "." << endl;
    }

    return 0;
}