#include<bits/stdc++.h>
using namespace std;
class aman{
int a;
int b;
public:
void get(){
    cout<<"enter the calue of a and b"<<endl;
    cin>>a>>b;
}
void print()
{
    cout<<"the value of a and b is"<<a<<" "<<b<<endl;
}
};
int main()
{
    aman *a;
    a=new aman();
    a->get();
    a->print();
}
