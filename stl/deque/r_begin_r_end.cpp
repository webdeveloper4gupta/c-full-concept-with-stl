#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d={1,2,3,4,5};
    deque<int>::iterator itr;
  for(auto x=d.rbegin();x!=d.rend();x++){
    cout<<*x<<endl;
  }
    return 0;
}