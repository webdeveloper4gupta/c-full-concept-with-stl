#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l1;
    l1={1,2,3,4,5,5,6};
    l1.push_back(12);
    cout<<l1.back()<<endl;
    return 0;
}