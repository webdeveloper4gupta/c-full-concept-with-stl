#include<iostream>

using namespace std;
int u=90;
class aman{
    int a;
    int b;
    static int h;
    public:
    class mahajan{
        int c;
        int d;
        public:
        void get()
        {
            // cout<<a<<endl;  gives error
            cout<<::u<<endl;
            cout<<h<<endl;  //we cna use static variable of outer class
            cout<<"get function of mahajn class"<<endl;
        }

    };
    void get()
    {
        cout<<"get function of aman class"<<endl;
    }
};
int aman::h=900;
int main()
{
    aman::mahajan m;
    m.get();
    aman s;
    s.get();
    return 0;
}