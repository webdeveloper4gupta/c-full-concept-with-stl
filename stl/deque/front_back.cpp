#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d={1,2,3,4,5,6};
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    return 0;
}