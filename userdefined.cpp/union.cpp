#include<iostream>
using namespace std;
typedef union {
    int a;
    int b;
}aman;
int main()
{
    aman a;
    a.a=90;
    a.b=89;
    cout<<a.a<<endl;
    return 0;
}