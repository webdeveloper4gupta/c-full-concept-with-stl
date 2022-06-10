#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l1={1,2,3,4,5};
    l1.remove(2);
    for(int x:l1){
        cout<<x<<endl;
    }
    return 0;
}