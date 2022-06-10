#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l1;
    l1.assign(5,10);
    for(int x:l1){
   cout<<x<<endl;
    }
    return 0;
}