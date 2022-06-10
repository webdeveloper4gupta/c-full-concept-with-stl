#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l1={1,2,3,4,5};
    for(auto a=l1.rbegin();a!=l1.rend();a++){
        cout<<*a<<endl;
    }
    return 0;
}