#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    forward_list<int> l1={1,2,3,4,5};
    l1.insert_after(l1.begin(),67);
      forward_list<int>::iterator itr;
     for(itr=l1.begin();itr!=l1.end();itr++){
        cout<<*itr<<endl;
     }
    return 0;
}