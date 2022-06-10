#include<iostream>
using namespace std;
class aman{
    int a;
    protected:
    int b;
    public:
    void get(){
        cout<<"enter the value of b"<<endl;
        cin>>b;
    }
    void set(){
        cout<<b<<endl;
    }
};
int main()
{
    aman a;
    // a.b=90; error comes
    a.get();
    a.set();
    return 0;
}