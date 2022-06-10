#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l1={1,2,3,4,5};
    l1.push_front(12);
    cout<<l1.front()<<endl;
    return 0;
}