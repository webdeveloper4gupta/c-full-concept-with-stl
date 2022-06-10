#include<iostream>
using namespace std;
class base{
public:
base()
{
    cout<<"base class constructor"<<endl;
}
base(int a){
    cout<<"base class param construtor"<<endl;
}
~base()
{
    cout<<"base class destructor"<<endl;
}
};
class derived1:public base{
public:

derived1()
{
    cout<<"derived1 class zero-arg constructor"<<endl;
}
derived1(int a){
    cout<<"derived1 class param constructor"<<endl;
}
~derived1()
{
    cout<<"derived1 class destructor"<<endl;
}
};
class derived2:public base{
public:
derived2()
{
    cout<<"derived2 class ero-argument constructor"<<endl;
}
derived2(int a){
    cout<<"derived2 class param constructor"<<endl;
}
~derived2()
{
    cout<<"derived2 class destructor"<<endl;
}
};
int main()
{
    derived2 d;
    
    return 0;
}