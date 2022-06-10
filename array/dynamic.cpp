#include<iostream>
using namespace std;

int main()
{
    int *a;
    int n;
    cout<<"enter the size of array "<<endl;
    cin>>n;
   int i;
     a=new int[5];
     for(i=0;i<n;i++){
         cout<<"enter the "<<i+1<<" value"<<endl;
         cin>>a[i];
     }
     for(i=0;i<n;i++){
         cout<<a[i]<<endl;
     }
     delete[] a;
    return 0;
}