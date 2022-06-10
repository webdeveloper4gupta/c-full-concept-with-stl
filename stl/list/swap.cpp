#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l1;
    l1={1,2,3,4,5,5};
    list<int> l2={7,8,9};
    l1.swap(l2);
    for(int x:l1){
        cout<<x<<endl;
    }
    return 0;
}