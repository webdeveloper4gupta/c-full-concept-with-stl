#include<iostream>
using namespace std;
class base{
int a;
protected:
int b;
public:
void get()
{
  cout<<"get function of base class"<<endl;
}
};
class derived1:public base{
    public:
    void get1()
    {
        cout<<base::b<<endl;
        // cout<<base::a<<endl; gives an error
    }
};
class derived2:public base{
public:
void get2()
{
    cout<<base::b<<endl;
}
};
int main()
{
    derived2 d;
    d.get2();
    return 0;
}