#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l1={1,2,3,4,5,6};
    l1.resize(90);
    cout<<l1.size()<<endl;
    cout<<l1.max_size()<<endl;
    return 0;
}