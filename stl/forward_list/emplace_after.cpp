#include<iostream>
#include<forward_list>
using namespace std;

int main()
{
    forward_list<int> l1={1,2,3,4,5};
    l1.emplace_after(l1.begin(),45);
    for(int x:l1){
        cout<<x<<endl;
    }
    return 0;
}