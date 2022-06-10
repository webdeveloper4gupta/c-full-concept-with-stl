#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s={1,2,3};
    s.insert(12);
    set<int>::iterator itr;
    set<int> s1={4,5,6};
    s1.swap(s);
    for(int x:s){
        cout<<x<<endl;
    }
   

   
    return 0;
}