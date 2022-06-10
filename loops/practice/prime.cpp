#include<iostream>
using namespace std;

int main()
{
    int num,i;
    cout<<"enter the number"<<endl;
    cin>>num;
    if(num!=2){
        for(i=2;i<num;i++){
            if(num%i==0){
                break;
            }

        }
        if(i==num){
            cout<<"prime number"<<endl;
        }
        else{
            cout<<"non prime"<<endl;
        }
    }
    else{
        cout<<"prime number"<<endl;
    }
    return 0;
}