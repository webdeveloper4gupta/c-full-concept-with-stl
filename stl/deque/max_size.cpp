#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d={1,2,3,4,5};
    cout<<d.max_size()<<endl;
    return 0;
}