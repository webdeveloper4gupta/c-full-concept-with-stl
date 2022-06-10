#include<iostream>
using namespace std;
class aman{
    public:
    int a=9;
    void print(){
        cout<<a<<endl;
    }
};
int main()
{
    aman a,j;
     a.a=90;
    a.print();
    j.print();
    return 0;
}