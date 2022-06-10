#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5};
    vector<int>::iterator itr;
    v.push_back(23);
    for(itr=v.begin();itr!=v.end();itr++){
        cout<<*itr<<endl;
    }
}