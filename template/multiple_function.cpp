#include<iostream>
using namespace std;
template<class t1,class t2>
void aman(t1 a,t2 b){
    cout<<a<<b<<endl;
}
template<class t1,class t2>
void sukritan(t1 a,t2 b){
    cout<<a<<b<<endl;
}
int main()
{
    aman(1,2);
    sukritan(2.5,"aman");
    return 0;
}