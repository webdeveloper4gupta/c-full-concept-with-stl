#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int> q;
    q.push(1);
    q.emplace(1);
  
    cout<<q.top()<<endl;
    return 0;
}