#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s={1,2,3};
    s.insert(12);
 set<int>::iterator itr;
 itr=s.find(1);
 itr++;
 cout<<*itr<<endl;
   
    return 0;
}
