#include<iostream>
using namespace std;
class base{
    int a;
    public:
    base()
    {
        cout<<"base zero argu class constructor"<<endl;
    }
    base(int a){
        cout<<"base class parametersied constructor"<<endl;
    }
    base( base &b){
        cout<<"copy constructor base class"<<endl;
    }
    ~base()
    {
        cout<<"base class destructor"<<endl;
    }
};
class derived1:public base{
int a;
public:
derived1()
{
    cout<<"derived1 class zero -argument constructor"<<endl;
}
derived1(int a){
    cout<<"derived1 class param constructr"<<endl;
}
derived1(derived1 &h){
    cout<<"derived1 class copy constructor"<<endl;
}
~derived1()
{
    cout<<"derived1 class desructor"<<endl;
}
};
class derived2:public base{
int a;
public:
derived2()
{
    cout<<"derived2 class zero -argument constructor"<<endl;
}
derived2(int a){
    cout<<"derived2 class param constructr"<<endl;
}
derived2(derived1 &h){
    cout<<"derived2 class copy constructor"<<endl;
}
~derived2()
{
    cout<<"derived2 clas destructor"<<endl;
}
};
int main()
{
    // derived2 d;
    derived2 d1(10);
    return 0;
}