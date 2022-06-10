#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    stack<int> s1;
    s1.push(90);
    s1.push(80);
    s1.swap(s);
    cout<<s.top()<<endl;
    return 0;
}