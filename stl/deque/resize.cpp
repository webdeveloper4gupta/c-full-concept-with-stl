#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d={1,2,3,4,5,6};
    d.resize(90);
    cout<<d.size()<<endl;
    return 0;
}