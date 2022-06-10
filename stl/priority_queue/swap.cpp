#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> q;
    q.push(1);
    q.push(2);
    priority_queue<int> q2;
    q2.push(12);
    q2.swap(q);
    cout<<q2.top()<<endl;
    cout<<q.top()<<endl;
}