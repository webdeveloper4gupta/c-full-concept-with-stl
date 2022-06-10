#include<iostream>
using namespace std;
template<class t1>
void aman(t1 a){
    cout<<a<<endl;
}
void aman(int a){
    cout<<a<<"non template called"<<endl;
}
int main()
{
    aman(2.5);
    aman(1);
    return 0;
}