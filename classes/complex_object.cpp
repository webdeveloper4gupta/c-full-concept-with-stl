#include<iostream>
using namespace std;
class aman{
    int a;
    int b;
    public:
    void get()
    {
        cout<<"get function of aman class"<<endl;
    }
};
class mahajan{
    int a;
    int b;
    public:
    aman d;
    void get()
    {
        d.get();
        cout<<"get function of mahajajn class"<<endl;
    }
};
int main()
{
    mahajan m;
    m.get();
    return 0;
}