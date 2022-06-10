#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int> q;
    q.push(1);
    q.push(2);
    q.pop();
    cout<<q.top()<<endl;
    return 0;
}