#include<iostream>
using namespace std;
class aman{
    int a;
    int b;
    static int a1;
    public:
    static void print()
    {
        // cout<<a<<endl;
        cout<<a1<<endl;
        cout<<"satic function call"<<endl;
    }
};
int aman::a1=9;
int main()
{
    aman::print();
    return 0;
}