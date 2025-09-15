// 2. Write a program to calculate circumference of a circle.
#include<iostream>
#define pi 3.14
using namespace std;
int main(){
  float radius, circumference;
  cout<<"Enter the value of radius :";
  cin>>radius;
  circumference=2*pi*radius;
  cout<<" circumference of a circle:"<<circumference;
  

    return 0;
}