#include<iostream>
using namespace std;
class base{
public:
void func1();
void func2();
void func3();
};
class derived:public base{
public:
void func4();
void func5();
};
void base::func1(){
    cout<<"func1 function of base class"<<endl;
}
void base::func2(){
    cout<<"func2 function of base class"<<endl;
}
void base::func3()
{
    cout<<"func3 function of base class"<<endl;
}
void derived::func4(){
    cout<<"derived class func4"<<endl;
}
void derived::func5()
{
    cout<<"derived class func5"<<endl;
}
int main()
{
    base *p=new derived();
    p->func1();
    p->func2();
    p->func3();
    // p->func4();gives error
    return 0;
}