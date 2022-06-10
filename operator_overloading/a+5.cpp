#include<iostream>
using namespace std;
class aman{
int a;

public:
void get()
{
    cout<<"enter the value of a "<<endl;
    cin>>a;
}
// using member function
// void operator +(int n){
//    this->a=this->a+n;
// }
friend void operator +(aman &,int );
void print()
{
    cout<<a<<endl;
}
};
void operator+(aman &a,int n){
    a.a=a.a+n;
}
int main()
{
    aman a;
    a.get();
    a+5;//a.operaor+(5)
    // for friend function  operator+(a,n);
    a.print();
    return 0;
}