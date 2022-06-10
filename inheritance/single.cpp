#include<iostream>
using namespace std;
class base{
int a;
int b;
public:
void get()
{
    cout<<"get function of base class"<<endl;
}

};
class mahajan:public base{
int a;
public:
void get()
{
    cout<<"get function of derived class"<<endl;
}
};
int main()
{
    base a;
    mahajan m;
    a.get();
    m.get();
    return 0;
}