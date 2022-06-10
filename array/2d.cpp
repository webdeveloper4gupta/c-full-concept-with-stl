#include<iostream>
using namespace std;

int main()
{
    int **arr;
    arr=new int*[2];
    for(int i=0;i<2;i++){
        arr[i]=new int[2];
    }
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<"enter the element in the array"<<endl;
            cin>>arr[i][j];
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
}