#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string> m;
    m[0]="amana";
    m[1]="sukritan";
   
     map<int,string>::iterator itr;
    for(auto x=m.rbegin();x!=m.rend();x++){
       cout<<x->first<<" "<<x->second<<endl;

    }
    return 0;
}