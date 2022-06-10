#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string> m;
    m[0]="amana";
    m[1]="sukritan";
    map<int,string>::iterator m1;
    m1=m.find(1);
    cout<<m1->first<<" "<<m1->second<<endl;
    return 0;
}