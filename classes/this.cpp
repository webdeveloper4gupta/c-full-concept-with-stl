#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class aman{
    int a;int b;
    public:
    void get(int a,int b){
        this->a=a;
        this->b=b;
    }
    void set()
    {
        cout<<a<<b;
    }
};
int main()
{
    aman a;
    a.get(1,2);
    a.set();
    return 0;
}