#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string> m;
    m[0]="amana";
    m[1]="sukritan";
   m.erase(1);
     map<int,string>::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++){
       cout<<itr->first<<" "<<itr->second<<endl;

    }
    return 0;
}