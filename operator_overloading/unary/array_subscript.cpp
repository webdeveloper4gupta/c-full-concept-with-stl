#include<iostream>
using namespace std;
class aman{
    int a[10];
    public:
    void operator[](int n){
        a[n]=90;
    }
    void print(int n){
        cout<<a[n]<<endl;
    }
};
int main()
{
    aman a;
    a[2];
    a.print(2);
    return 0;
}