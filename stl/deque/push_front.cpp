#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d={1,2,3,4,5};
    d.push_front(12);
    for(int x:d){
        cout<<x<<endl;
    }
    return 0;
}