#include<iostream>
using namespace std;
void aman(int &a,int &b){
    int c;
    c=a;
    a=b; 
    b=c;
}
int main()
{
    int a,b;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    aman(a,b);
    cout<<"after running function"<<endl;
    cout<<a<<" "<<b<<endl;
    return 0;
}