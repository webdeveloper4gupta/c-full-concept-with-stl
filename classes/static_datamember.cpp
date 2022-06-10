#include<iostream>
using namespace std;
class aman{
int a;
int b;
static int c;
public:
void get()
{
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
}
void print()
{
    cout<<a<<" "<<b<<endl;
    cout<<c<<endl;
}
};
int aman::c=9;
int main()
{
    aman a;
    a.get();
    a.print();
    return 0;
}