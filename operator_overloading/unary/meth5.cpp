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
friend aman operator-(aman &a);
void print()
{
    cout<<a<<endl;
}
};
aman operator-(aman &a){
    a.a=-a.a;
    return a;
}
int main()
{
    aman a,b;
    a.get();
    b=-a;
    b.print();
    return 0;
}