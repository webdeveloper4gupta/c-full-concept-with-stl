#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1={1,2,3,4,5};
    vector<int> v2={6,7,8,9};
    vector<int> v3(v1.size()+v2.size());
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
    for(int x:v3){
        cout<<x<<endl;
    }
    return 0;
}