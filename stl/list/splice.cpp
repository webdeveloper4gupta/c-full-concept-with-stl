#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l1;
    l1={1,2,3,4,5,6,7};
    list<int> l2;
    l2.splice(l2.begin(),l1);
    for(int x:l2){
        cout<<x<<endl;
    }
    cout<<"in first list"<<endl;
    for(int x:l1){
        cout<<x<<endl;
    }
    return 0;
}