#include<iostream>
using namespace std;
class aman{
    int a;int b;
    public:
    void get()
    {
        cout<<"enter the value of a and b"<<endl;
        cin>>a>>b;
    }
    friend void print(aman a);
};
void print(aman a){
    cout<<a.a<<a.b<<endl;
}
int main()
{
    aman a;
    a.get();
    print(a);
    return 0;
}