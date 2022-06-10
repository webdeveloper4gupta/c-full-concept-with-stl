#include<iostream>
using namespace std;
class aman{
int a;
protected:
int c;
public:
int b;
void get1()
{
    cout<<"get function of base class"<<endl;
}
};
class mahajan:public aman{
int a;
public:
void print()
{
    // cout<<aman::a<<endl;  it gives error as a private member of aman class
    cout<<aman::c<<endl;
    cout<<aman::b<<endl;
}
};
int main()
{
    aman a;
    // a.a=90; error
    a.b=90;
    // a.c=89;error
    mahajan m;
    // m.get1();   gives an error
    m.get1();
    return 0;
}