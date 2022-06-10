#include<iostream>
using namespace std;
class aman{
    int a;
    int b;
    public:
    void get() const
    {
        // a=90;    gives error
        // b=89; gives eror
        cout<<"here i cannot able to change anything"<<endl;
        // cout<<"enter the value of a and b"<<endl;
        // cin>>a>>b;  gives error
    }

};
int main()
{
    aman a;
    a.get();
    return 0;
}