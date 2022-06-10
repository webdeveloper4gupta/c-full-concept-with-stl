#include<iostream>
using namespace std;
class base{
int a;
int b;
public:
base(){

}
base(int a,int b){
    this->a=a;
    this->b=b;
 
}
 virtual void show()
{
    cout<<b<<" "<<a<<endl;
}
};
class derived:public base{
int c;
int d;
public:
derived(int a,int b,int c,int d):base(c,d){
    this->c=a;
    this->d=b;
}
void get()
{
    cout<<"enter the value of c and d"<<endl;
    cin>>c>>d;
}
 virtual void show()
{
    cout<<d<<" "<<c<<endl;
}
};
int main()
{
    base b;
    derived d(11,20,1,21);
    d.get();
    b=d;
    d.show();
    b.show();
    return 0;
}