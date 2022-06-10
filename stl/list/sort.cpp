#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l1={2,6,4,8,12,1};
    l1.sort();
    for(int x:l1){
        cout<<x<<endl;
    }
    return 0;
}