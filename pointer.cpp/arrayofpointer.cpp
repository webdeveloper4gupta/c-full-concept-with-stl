#include<iostream>
using namespace std;

int main()
{
    int *as[10];
    int a=9;
    as[0]=&a;
    cout<<*as[0];
    return 0;
}