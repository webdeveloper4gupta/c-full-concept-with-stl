#include<iostream>
using namespace std;
class aman{
    public:
    int a;
    void get(){
        cout<<"enter the value of a"<<endl;
        cin>>a;
    }
    void set(){
        cout<<"the value of a is"<<a<<endl;
    }
};
int main()
{
    aman a;
    a.get();
    a.set();
    return 0;
}