#include<iostream>
using namespace std;

int main()
{
    int a[10];
    int i;
    for(i=0;i<5;i++){
        cout<<"enter the value in array"<<endl;
        cin>>a[i];
    }
    int *ptr1,*ptr2;
    ptr1=a;
    ptr2=&a[2];
    cout<<*ptr2<<endl;
    for(i=0;i<5;i++){
        cout<<*(ptr1+i)<<endl;
    }
    cout<<*(ptr1+1)<<endl;
    return 0;
}