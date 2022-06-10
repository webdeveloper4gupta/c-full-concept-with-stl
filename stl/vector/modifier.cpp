#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={1,2,3,4,5,6,7,8,9};
     v.push_back(23);
     v.pop_back();
     v.emplace(v.begin(),90);
     v.emplace_back(80);
     v.insert(v.begin()+2,67);
     vector<int> v1={11,12};
     v1.swap(v);
     for(int x:v){
        cout<<x<<endl;
     }
     v1.erase(v1.begin());
  sort(v1.begin(),v1.end());
    v1.clear();
    return 0;
}