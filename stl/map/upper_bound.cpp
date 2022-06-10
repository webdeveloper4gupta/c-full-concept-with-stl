#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string> m;
    m[0]="amana";
    m[1]="sukritan";
     map<int,string>::iterator itr;
     itr=m.upper_bound(0);
     cout<<itr->first<<" "<<itr->second<<endl;
    return 0;
}