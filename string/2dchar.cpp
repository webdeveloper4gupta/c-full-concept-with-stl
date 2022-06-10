#include<iostream>
using namespace std;

int main()
{
    char a[2][2];
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<"enter the value of"<<i+1<<"element"<<endl;
            cin>>a[i][j];
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<a[i][j]<<endl;
        }
    }
    return 0;
}