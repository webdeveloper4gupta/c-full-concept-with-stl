#include<iostream>
using namespace std;

int main()
{
    int num,i,j;
    cout<<"enter the value of n"<<endl;
    cin>>num;
    for(i=0;i<num;i++){
        for(j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}