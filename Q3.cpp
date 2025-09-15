//  Write a program to calculate simple interest. 
#include<iostream>
using namespace std;
int main(){
    float p,r,t;
    float simple_intrest;
    cout<<"Enter the principle amount:";
    cin>>p;
    cout<<"Enter the rate of intrest :";
    cin>>r;
    cout<<"Enter the time period:";
    cin>>t;
    simple_intrest=(p*r*t)/100;
    cout<<"Simole intrest is :"<<simple_intrest;
    
    return 0;
}