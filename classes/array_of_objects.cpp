#include<iostream>
using namespace std;
class aman{
    int a;
    int b;
    public:
    void get(){
        cout<<"enter the value of a and b"<<endl;
        cin>>a>>b;
    }
    void print()
    {
        cout<<a<<" "<<b<<endl;
    }
};
int main()
{
    aman a[2];
    a[0].get();
    a[1].get();
    a[1].print();
    a[0].print();
    
    return 0;
}