#include<iostream>
using namespace std;
class aman{
int a;
public:
void get()
{
    cout<<"enter the value of a "<<endl;
    cin>>a;
}
aman operator-(){
    a=-a;
    return (*this);
}
void print()
{
    cout<<a<<endl;
}
};
int main()
{
    aman a;
    a.get();
    -a;
    a.print();
    return 0;
}