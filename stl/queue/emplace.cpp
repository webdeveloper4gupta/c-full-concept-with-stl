#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(12);
    cout<<q.back()<<endl;
    return 0;
}