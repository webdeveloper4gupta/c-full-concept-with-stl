#include<iostream>
using namespace std;
class aman{
    int a=0;
    public:
    void get()
    {
        cout<<"enter the value of a "<<endl;
        cin>>a;
    }
    friend void print();
};
void print()
{
    aman a;
    cout<<a.a<<endl;
}
int main()
{
    aman a;
    a.get();
    print();
    return 0;
}