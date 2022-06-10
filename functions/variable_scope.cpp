#include<iostream>
using namespace std;

int main()
{
    int a=9;
    {
        int a=90;
        cout<<a<<endl;

    }
    cout<<a<<endl;
    return 0;
}