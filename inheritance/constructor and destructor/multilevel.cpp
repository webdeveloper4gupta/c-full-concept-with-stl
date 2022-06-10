#include<iostream>
using namespace std;
class base{
int a;
int b;
public:
base()
{
    cout<<"base class constructor zero-arg"<<endl;
}
base(int a){
    cout<<"base class param constructor"<<endl;
}
base(base &b){
    cout<<"base class copy constructor"<<endl;
}
~base()
{
    cout<<"base class destructor call"<<endl;
}
};
class derived:public base{
int a;
public:
derived()
{
    cout<<"derived class zero-arg constructor"<<endl;
}
derived(int n,int x):base(x){
    cout<<"derived class param constructor"<<endl;
}
derived(derived &d){
    cout<<"derived class copy const"<<endl;
}
~derived()
{
    cout<<"derived class destructor"<<endl;
}
};
class superderived:public derived{
int a;
public:
superderived()
{
    cout<<"superderived zero-arg constructor"<<endl;
}
superderived(int n,int x,int y):derived(x,y){
    cout<<"superdrived param constructor"<<endl;
}
superderived(superderived &b)
{
    cout<<"superderived copy constructor"<<endl;
}
~superderived()
{
    cout<<"superderived class destructor"<<endl;
}
};
int main()
{
    superderived d(1,2,3);
    return 0;
}