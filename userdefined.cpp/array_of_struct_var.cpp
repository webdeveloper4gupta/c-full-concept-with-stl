#include<iostream>
using namespace std;
struct aman{
    int *a;
    int size;

};
int main()
{
     struct aman a[2];
     cout<<"enter the size of array"<<endl;
     cin>>a[0].size;
     a[0].a=new int[a[0].size]  ;
     int i;
     for(i=0;i<a[0].size;i++){
         cout<<"enter the value"<<endl;
         cin>>a[0].a[i];
     }
     for(i=0;i<a[0].size;i++){
         cout<<a[0].a[i]<<endl;
         
     }


   return 0;
}