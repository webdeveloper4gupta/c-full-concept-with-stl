#include<iostream>
using namespace std;
template<class t>
t aman(t a){
    cout<<a<<endl;
    return a;
}
int main()
{
  int  a=  aman(1);
  cout<<a<<endl;
    return 0;
}