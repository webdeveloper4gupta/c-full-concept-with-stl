#include<iostream>
using namespace std;

int main()
{
    int num,i,j;
    cout<<"enter the value of num"<<endl;
    cin>>num;
    for(i=num;i>0;i--){
        for(j=i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}