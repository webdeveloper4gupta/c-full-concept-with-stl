#include<iostream>
#include<forward_list>
using namespace std;

int main()
{
    forward_list<int> l1;
    l1={1,2,3,4,5};
    forward_list<int> l2={1};
    l2.splice_after(l2.begin(),l1);
    for(int x:l2){
        cout<<x<<endl;
    }
    return 0;
}