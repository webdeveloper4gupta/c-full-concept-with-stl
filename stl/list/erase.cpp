#include<iostream>
#include<list>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l1={1,2,3,4,5,6,7,8};
    list<int>:: iterator itr;
    itr=l1.begin();
    // we advance the iterator by using advance function
    advance(itr,2);
    l1.erase(itr);
    for(int x:l1){
        cout<<x<<endl;
    }
    

    return 0;
}