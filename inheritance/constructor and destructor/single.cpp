#include<iostream>
using namespace std;
class base{
int a;
public:
base()
{
    cout<<"zero-argument base class constructor"<<endl;
}
base(int a){
    cout<<"base class paramterised constructor"<<endl;
}
base(base &b){
    cout<<"base class copy consteuctor"<<endl;
}
void get()
{
    cout<<"get function of base class"<<endl;
}
~base(){
    cout<<"base class desturcor"<<endl;
}
};
class derived:public base{
int a;
public:
derived()
{
    cout<<"zero-argument constructor of derived class"<<endl;
}
derived(int a,int x):base(x){
    cout<<"param constructor of derived class"<<endl;
}
derived(derived &d){
    cout<<" derived class copy constructor"<<endl;
}
void get()
{
    cout<<"get function of derived class"<<endl;
}
~derived()
{
    cout<<"destructor"<<endl;
}
};
int main()
{
    derived d(1,2);//for calling base class param costructor too
    return 0;
}