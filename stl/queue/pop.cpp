#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(12);
    q.push(13);
    q.pop();
    q.pop();
    cout<<q.front()<<endl;
    return 0;
}