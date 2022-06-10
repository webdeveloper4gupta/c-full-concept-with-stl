#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s={1,2,3};
    s.insert(12);
   cout<<s.count(1)<<endl;
   
    return 0;
}
