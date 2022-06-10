#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int>d={5,8,3,1};
    sort(d.begin(),d.end());
     deque<int>::iterator itr;
    for(itr=d.begin();itr!=d.end();itr++){
        cout<<*itr<<endl;
    }
    return 0;
}