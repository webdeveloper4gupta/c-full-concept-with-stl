#include<iostream>
using namespace std;
class base{
int a;
int b;
public:
void get()
{
    cout<<"get function of base call"<<endl;
}
};
class derived:public base{
int a;
int b;
public:
void get()
{
    cout<<"get function of derived class"<<endl;
}
};
int main()
{
    derived d;
    d.get();
    d.base::get();
    return 0;
}