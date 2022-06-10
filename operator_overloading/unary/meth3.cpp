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
    aman a1;
    a1.a=-a;
    return a1;
}
void print()
{
    cout<<a<<endl;
}
};
int main()
{
    aman a,b;
    a.get();
   b= -a;
    b.print();
    return 0;
}