#include<iostream>
using namespace std;
template<class t1,class t2>
class base{
t1 a;
t2 b;
public:
void print(t1 a,t2 b){
    this->a=a;
    this->b=b;
}
void set()
{
    cout<<a<<b<<endl;
}
};
template<class t1,class t2>
class derived:public base<t1,t2> {
     int a;
     int b;
     public:
     void get()
     {
         cout<<"get function of derived class"<<endl;
     }
};
int main()
{
    base<int,float> b;
    b.print(1,2.5);
    b.set();
    derived<int,float> f;
    f.get();
    return 0;
}