#include <iostream>
using namespace std;
class base
{
    int a;
    int b;

public:
base()
{
    cout<<"base class zero-argument constructor"<<endl;
}
base(int a){
    cout<<"base class param constructor"<<endl;
}
   ~base()
   {
       cout<<"base class destructor"<<endl;
   }
};
class derived1 :virtual public base
{
    int a;
    int b;

public:
 derived1()
 {
     cout<<"derived1 class zero-argument constructor"<<endl;
 }
 derived1(int a){
  cout<<"derived1 class param cosntructor"<<endl;
 }
 ~derived1()
     {
         cout<<"derived1 clas destructor"<<endl;
     }
};
class derived2 : virtual public base
{
    int a;
    int b;

public:
   derived2()
   {
       cout<<"derived2 zero-argument constructor"<<endl;
   }
   derived2(int a){
       cout<<"derived 2 param constructor"<<endl;
   }
   ~derived2()
   {
       cout<<"derived2 destrcutor"<<endl;
   }
};
class superderived : public derived1, public derived2
{
    int a;
    int b;

public:
    superderived()
    {
        cout<<"superderived class constructor"<<endl;
    }
    superderived(int a){
        cout<<"superderived class parm construcor"<<endl;
    }
    ~superderived()
    {
        cout<<"superderied class destructor"<<endl;
    }
};
int main()
{
   superderived d;
//    d.base::get();  tyhis will give error
    return 0;
}