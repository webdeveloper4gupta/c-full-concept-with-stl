#include<iostream>
using namespace std;
class base{
public:
virtual void get()=0;

};
class derived:public base{
public:
void get(){
    cout<<"base function of derived class"<<endl;
}
void print()
{
    cout<<"print function of derived class"<<endl;
}
};

int main()
{
    derived d;
    base *b;
    b=&d;
    b->get();
    //  d.get();
    return 0;
}