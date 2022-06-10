#include<iostream>
using namespace std;
class aman{
    private:
    int a;
    int b;
    public:
    void get(){
        cout<<"enter the value of a"<<endl;
        cin>>a;
        cout<<"enter the value of b"<<endl;
        cin>>b;
    }
    void set(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
    }
};
int main()
{
    aman a;
 /*   a.a=90;   error because a and b is private data member of class aman
    a.b=89;*/
    a.get();
    a.set();
    return 0;
}