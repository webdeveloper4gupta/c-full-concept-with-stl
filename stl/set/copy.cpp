#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s={1,2,3};
    s.insert(12);
    set<int> s1;
     s1=s;
     for(int x:s1){
        cout<<x<<endl;
     }

   
    return 0;
}