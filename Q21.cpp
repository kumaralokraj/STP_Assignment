//  Create a program that takes a number (1-7) as input and 
// prints the corresponding day of the week.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the nimber 1 to 7";
    cin>>n;
    switch (n)
    {
    case 1:
        cout<<"Monday";
        break;
    
   case 2:
      cout<<"Tuesday";
        break;
    case 3:
     cout<<"wedenesday";
     break;
     case 4:
     cout<<"Thusday";
     break;
    case 5:
     cout<<"friday";
     break;
    case 6:
    cout<<"saturday";
    break;
    case 7:
    cout<<"sunday";
    default:
    cout<<"Worng input:";

    }
    

    return 0;
}