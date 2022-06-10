#include<iostream>
using namespace std;
void aman(int a=0,int b=0){
    cout<<"the value of a is"<<a<<endl;
    cout<<"the value of b is "<<b<<endl;
}
int main()
{

    aman(1);
    aman();
    return 0;
}