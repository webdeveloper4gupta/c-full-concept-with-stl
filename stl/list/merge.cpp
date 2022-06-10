#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l1={1,2,3,4,5,6,7};
    list<int> l2={8,9};
    l1.merge(l2);
    for(int x:l1){
        cout<<x<<endl;
    }
    // for(int x:l2){
    //     cout<<x<<endl;
    // }
    return 0;
}