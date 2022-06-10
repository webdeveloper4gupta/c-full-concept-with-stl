#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s={1,2,3};
    s.insert(12);
    s.erase(12);
    for(int x:s){
        cout<<x<<endl;
    }
    return 0;
}
