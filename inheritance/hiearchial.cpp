#include <iostream>
using namespace std;
class base
{
    int a;
    int b;

public:
    void get()
    {
        cout << "get function of a class" << endl;
    }
};
class derived1 : public base
{
    int a;
    int b;

public:
    void get()
    {
        base::get();
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
int main()
{
    base b;
    b.get();
    derived1 d;
    d.get();
    d.base::get();
    return 0;
}