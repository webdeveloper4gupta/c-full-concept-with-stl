#include <iostream>
using namespace std;
class base
{
    int a;
    int b;

public:
    void get()
    {
        cout << "get fucntion of base class" << endl;
    }
};
class derived1 :virtual public base
{
    int a;
    int b;

public:
    void get()
    {
        cout << "get function of derived1 class" << endl;
    }
};
class derived2 :virtual public base
{
    int a;
    int b;

public:
    void get()
    {
        cout << "get function of derived2 class" << endl;
    }
};
class superderived : public derived1, public derived2
{
    int a;
    int b;

public:
    void get()
    {
        cout << "get function of superderived class" << endl;
    }
};
int main()
{
   superderived d;
   d.base::get();  
   d.get();
   d.derived1::get();
    return 0;
}