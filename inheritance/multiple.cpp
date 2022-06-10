#include<iostream>
using namespace std;
class base1{
    int a;
    public:
    void get()
    {
        cout<<"get function of base 1 class"<<endl;
    }
};
class base2{
    int a;
    public:
    void get()
    {
        cout<<"get function of bse 2 class"<<endl;
    }
};
class derived :public base1,public base2{
int a;
public:
void get()
{
    cout<<"get functionof derived class"<<endl;
}
};
int main()
{
    derived d;
    d.derived::get();
    d.base1::get();
    d.base2::get();
    return 0;
}