#include<iostream>
using namespace std;
int main(){
    int st,end;
    cout<<"Enter the start no and ending number :";
    cin>>st>>end;
    for(int num=st;num<=end;num++){
        int count=0;
        for(int i=1;i<=num;i++){
           if(num%i==0){
            count++;
           }
        }
        if(count==2){
            cout<<num<<" ";
        }

    }
    return 0;
}