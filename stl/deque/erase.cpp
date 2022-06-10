#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d={1,2,3,4,5};
    d.erase(d.begin()+2);
     deque<int>::iterator itr;
    for(itr=d.begin();itr!=d.end();itr++){
        cout<<*itr<<endl;
    }
    return 0;
}