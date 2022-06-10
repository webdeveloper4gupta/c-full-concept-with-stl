#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l1={1,2,3,4,5,6,7,8};
    l1.emplace_front(12);
    l1.emplace_back(90);
    l1.emplace(l1.begin(),89);
        for(int x:l1){
        cout<<x<<endl;
    }
    return 0;
}