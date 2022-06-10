#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s={1,2,3};
    s.insert(12);
    set<int>::iterator itr;
    for(auto x=s.rbegin();x!=s.rend();x++){
        cout<<*x<<endl;
    }
    return 0;
}
