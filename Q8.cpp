// Write a program to input three characters from the user and 
// display characters with their corresponding ASCII codes.
#include<iostream>
using namespace std;
int main(){
    char ch1,ch2,ch3;
    cout<<"Enter the three characters :";
    cin>>ch1>>ch2>>ch3;
    cout<<"ASCII Value is ch1:"<<int(ch1)<<endl;
    cout<<"ASCII Value is ch2:"<<int(ch2)<<endl;
    cout<<"ASCII Value is ch3:"<<int(ch3)<<endl;

    return 0;
}