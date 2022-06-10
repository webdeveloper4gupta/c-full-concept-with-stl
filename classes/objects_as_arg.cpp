#include<iostream>
using namespace std;
class aman
{
int a;
int b;
public:
void get1()
{
    cout<<"enter the value of a "<<endl;
    cin>>a;
}
void get(aman a1){
     a=a1.a;
     cout<<a<<endl;
  
}
};
int main()
{
    aman a;
    a.get1();
    aman a1;
    a1.get(a);
    return 0;
}