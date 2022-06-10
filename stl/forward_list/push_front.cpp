#include<iostream>
#include<forward_list>
using namespace std;

int main()
{
    forward_list<int> l1={1,2,3,4,5,6,7};
     l1.push_front(12);
     forward_list<int>::iterator itr;
     for(itr=l1.begin();itr!=l1.end();itr++){
        cout<<*itr<<endl;
     }
    return 0;
}