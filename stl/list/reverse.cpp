#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l1={1,2,3,43,5};
    l1.reverse();
    for(int x:l1){
        cout<<x<<endl;
    }
    return 0;
}