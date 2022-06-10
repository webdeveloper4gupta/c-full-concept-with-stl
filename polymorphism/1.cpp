// it is used to resolve the problem comes in the  base class pointer and derived class object
// polymorphism is acheived when we try to access virtual function throught a base class pointer,pointing to a derived class object
#include<iostream>
using namespace std;
class base{
int a;
int b;
public:
virtual void get()
{
    cout<<"get function of base class"<<endl;
}
};
class derived:public base{
int a;
int b;
public:
void get(){
cout<<"get function of derived class"<<endl;
}


};
int main()
{
    base *b;
    derived d;
    b=&d;
    b->get();
    // ((derived*)b)->get();

    return 0;
}