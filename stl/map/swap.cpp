#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string> m;
    m[0]="amana";
    m[1]="sukritan";
    map<int,string> m1;
    m1[3]="mahajan";
    m1[4]="gup";
    m1.swap(m);
     map<int,string>::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++){
       cout<<itr->first<<" "<<itr->second<<endl;

    }
    return 0;
}