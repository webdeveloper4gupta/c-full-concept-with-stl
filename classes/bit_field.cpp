#include<iostream>
using namespace std;
class aman{
    int a:2;
    int b:3;
    public:
    void get()
    {
        this->a=2;
        this->b=9;
    }
    void print()
    {
        cout<<a<<" "<<b<<endl;
    }
};
int main()
{
    aman a;
    a.get();
    a.print();
    return 0;
}