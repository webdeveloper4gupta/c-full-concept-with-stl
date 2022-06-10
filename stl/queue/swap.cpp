#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    queue<int> q2;
    q2.swap(q);
    cout<<q2.front()<<endl;
    cout<<q.front()<<endl;
    return 0;
}