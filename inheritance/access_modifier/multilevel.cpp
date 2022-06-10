#include<iostream>
using namespace std;
class base{
int a=1;
protected:
int b=2;
public:
int c=3;
void get()
{
    cout<<"get function of base class"<<endl;
}
};
class derived1:public base{
int a=3;
protected:
int b=5;
public:
int c=6;
void get1()
{
    cout<<base::b<<endl;
    cout<<base::c<<endl;
    cout<<"get function of derived1 class"<<endl;
}
};
class derived2:private derived1{
int a;
protected:
int b;
public:
int c;
void get2()
{
  cout<<base::b<<endl;
  cout<<base::c<<endl;
  cout<<derived1::b<<endl;
  cout<<derived1::c<<endl;
  derived1::get1();
  derived1::get();
}
};
int main()
{
    derived2 d;
    d.get2();
    // d.get1();it gives an error
    return 0;
}