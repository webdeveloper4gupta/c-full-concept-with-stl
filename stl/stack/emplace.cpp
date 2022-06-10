#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;
    s.emplace(1);
    s.emplace(2);
    cout<<s.top()<<endl;
    return 0;
}