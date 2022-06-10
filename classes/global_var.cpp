#include<iostream>
using namespace std;
int b=98;
class aman{
    int a=34;
    public:
    void print()
    {
        cout<<a<<endl;
        cout<<::b<<endl;
    }
};
int main()
{
    aman a;
    a.print();
    return 0;
}