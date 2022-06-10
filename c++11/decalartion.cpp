#include<iostream>
using namespace std;

int main()
{
    int x=9;
    decltype(x) y=9;
    cout<<y<<endl;
    return 0;
}