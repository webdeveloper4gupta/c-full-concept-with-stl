#include<iostream>
using namespace std;
int a=90;
void aman()
{
    cout<<a<<endl;
}
int main()
{
    a=67;
    aman();
    cout<<a<<endl;

    return 0;
}