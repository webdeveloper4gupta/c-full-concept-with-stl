#include<iostream>
#include<forward_list>
using namespace std;

int main()
{
    forward_list<int> l1;
    cout<<l1.max_size()<<endl;
    return 0;
}