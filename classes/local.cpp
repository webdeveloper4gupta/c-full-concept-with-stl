#include<iostream>
using namespace std;
int y=90;
int main()
{
    int y;
    static int u=9000;
    class aman{
        int a;
        int b;
        // static int k;   it gives error
        public:
        void get()
        {
            cout<<"get function"<<u<<endl;
        }
        void print(){
            cout<<"welcome to code world!"<<::y<<endl;
        }
    };
    // void aman::print()   this give error
    // {
    //     cout<<"print function"<<endl;
    // }

    aman a;
    a.get();
    a.print();
    return 0;
}