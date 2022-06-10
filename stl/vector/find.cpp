#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
vector<int> v={1,2,3,40,5,6,7,4};
vector<int>::iterator itr;
itr=find(v.begin(),v.end(),4);
cout<<*itr<<endl;
    return 0;
}