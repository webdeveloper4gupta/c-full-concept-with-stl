#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> d={1,2,3,4,5};
    d.emplace_front(90);
     deque<int>::iterator itr;
    for(itr=d.begin();itr!=d.end();itr++){
        cout<<*itr<<endl;
    }
    return 0;
}