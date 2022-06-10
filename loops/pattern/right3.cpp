#include<iostream>
using namespace std;

int main()
{
    int n,i,j,k;
    cout<<"enter thee value of n"<<endl;
    cin>>n;
    for(i=n;i>0;i--){
        for(j=i;j>1;j--){
            cout<<" ";
        }
        for(k=0;k<=n-i;k++){
            cout<<"*";
        }
        cout<<endl;

    }
    return 0;
}