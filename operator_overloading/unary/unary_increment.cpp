#include<iostream>
using namespace std;
class aman{
int a;
public:
void get()
{
    cout<<"enter the value of a"<<endl;
    cin>>a;
}
// using member function
// void operator++(int n){
//     a=a+1;
// }
friend void operator++(aman &,int n);
void print()
{
    cout<<"the value of a"<<a<<endl;
}
};
void operator++(aman &a,int n){
    a.a=a.a+1;
}
int main()
{
    aman a;
    a.get();
    a++; //post increment
    a.print();
    return 0;
}