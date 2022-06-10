#include<iostream>
using namespace std;

int main()
{
    int n,i,j,k;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(i=0;i<n;i++){
       for(j=0;j<i;j++){
           cout<<" ";
       }
       for(k=n;k>0;k--){
           cout<<"*";
       }
       cout<<endl;
    }
    return 0;
}