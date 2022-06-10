#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d={1,2,3,4,5};
    deque<int>d1={6,7,8,9,10};//ize must be same of two deque
    d1.swap(d);
     deque<int>::iterator itr;
    for(itr=d.begin();itr!=d.end();itr++){
        cout<<*itr<<endl;
    }
    return 0;
}