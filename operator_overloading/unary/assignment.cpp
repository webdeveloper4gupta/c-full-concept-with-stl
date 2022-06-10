#include<iostream>
using namespace std;
class aman{
int a;
public:
void get()
{
    cout<<"enter the value of a"<<endl;
    cin>>a;
}
void operator=(aman a1){
    a=a1.a;
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
    aman a1;
    a1=a;     //a1.operator=(a);
    a1.print();  
    return 0;
}