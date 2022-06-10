#include<iostream>
using namespace std;
class base{
public:
virtual void get()
{
    cout<<"get function of base class"<<endl;
}
};
class derived:public base{
public:
void print()
{
    cout<<"print function of derived class"<<endl;
}
};
int main()
{
    base b;
    b.get();
    derived d;
    d.print();
    return 0;
}