#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l1={1,2,3,4,5,6};
    l1.pop_back();
    cout<<l1.back()<<endl;
    return 0;
}