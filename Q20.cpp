// Develop a program that takes four numbers as input and 
// prints the largest among them. 
#include<iostream>
using namespace std;
int main()
{
    int  a,b,c,d;
    cout<<"Enter the four number :";
    cin>>a>>b>>c>>d;
    if(a>b && a>c && a>d){
        cout<<"a is greater ";
    }
    else if(b>a && b>c && b>d){
        cout<<"b is greater ";
    }
    else if(c>a && c>b && c>d){
        cout<<"c is greater:";
    }
    else{
        cout<<"d is greater ";
    }
    
    return 0;
}