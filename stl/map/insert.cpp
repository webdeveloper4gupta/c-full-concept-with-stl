#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,int> m;
    m.insert(pair<int,int>(1,2));
    m.insert(pair<int,int>(3,4));
     map<int,int>::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++){
       cout<<itr->first<<" "<<itr->second<<endl;

    }
    return 0;
}