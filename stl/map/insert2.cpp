#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string> m;
   m.insert({1,"aman"});
   m.insert({2,"sukritan"});
     map<int,string>::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++){
       cout<<itr->first<<" "<<itr->second<<endl;

    }
    return 0;
}