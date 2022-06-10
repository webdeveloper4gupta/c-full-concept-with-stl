#include<iostream>
using namespace std;
class aman{
    int a;
    int b;
    public:
    void fun(){
        cout<<"enter the value of a and b"<<endl;
        cin>>a>>b;
    }
    void fun1();
};
inline void aman:: fun1(){
    cout<<"the value of a and b is "<<a<<" "<<b<<endl;
    }
int main()
{
    aman a;
    a.fun();
    a.fun1();
    return 0;
}