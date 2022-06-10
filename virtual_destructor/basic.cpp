#include<iostream>
using namespace std;
class aman{
  public:
  aman()
  {
      cout<<"aman class zero argument constrructor"<<endl;
  }
  aman(int n){
      cout<<"aman class param constructor"<<endl;
  }
 virtual ~aman()
  {
      cout<<"base class destructor called"<<endl;
  }
};
class mahajan:public aman{
public:
mahajan()
{
    cout<<"mahajan class zero argument const"<<endl;
}
mahajan(int n){
    cout<<"mahajan class param constructor"<<endl;
}
~mahajan()
{
    cout<<"mahajan destructor"<<endl;
}

};
int main()
{ 
    aman *a=new mahajan();
  
    delete a;
    return 0;
}