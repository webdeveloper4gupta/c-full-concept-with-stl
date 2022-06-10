#include<iostream>
using namespace std;
class aman{
    int a;int b;
    public:
    aman(){
        a=1;
        b=2;
        cout<<"zero argument constructor called"<<endl;
    }
    void print()
    {
        cout<<a<<" "<<b<<endl;
    }
};
int main()
{
    aman a;
    a.print();
    return 0;
}