#include<iostream>
using namespace std;
class mahajan;
class aman{
int a=3;
int b;
public:
friend mahajan;
void get()
{
    cout<<"get function of aman class"<<endl;
}
};
class mahajan{
  int a;int b;
  public:
 aman m;
  void get()
  {
      cout<<m.a<<endl;
      cout<<"get function mahajan class"<<endl;
  }
};
int main()
{
    mahajan m;
    m.get();
    return 0;
}