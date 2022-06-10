#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l1={1,2,3,4,5,6};
    list<int>:: iterator itr;
    itr=l1.begin();
    advance(itr,3);
    l1.insert(itr,5);
    for(int x:l1){
       cout<<x<<endl;
    }
    return 0;
}