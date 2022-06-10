#include<iostream>
using namespace std;
class base{
    int a;
    public:
    void get()
    {
        cout<<"get function of base class"<<endl;
    }
};
class derived1:public base{
int a;
public:
void get()
{
    cout<<"get function of derived1 class"<<endl;
}
};
class derived2:public derived1{
    int a;
    public:
    void get()
    {
   cout<<"get fuynction of derived2 class"<<endl;
    }
};
int main()
{
    derived2 d;
    d.base::get();
    d.derived1::get();
    d.derived2::get();
    return 0;
}