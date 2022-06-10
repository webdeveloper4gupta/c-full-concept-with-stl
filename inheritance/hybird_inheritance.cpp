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
class derived1 : public base
{
    int a;
    int b;

public:
    void get()
    {
        cout << "get function of derived1 class" << endl;
    }
};
class derived2 : public base
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
//    d.base::get();  tyhis will give error
    return 0;
}