// Write a program to calculate sum of first N natural numbers 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the valuse of N:";
    cin>>n;
    int count=0;
    for(int i=1;i<=n;i++){
        count=count+i;
    }
    cout<<"Sum of :"<<count;


    return 0;
}