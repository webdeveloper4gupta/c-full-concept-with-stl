#include<iostream>
using namespace std;
class aman{
    int a;
    public :
    void take()
    {
        cout<<"enter the value of a"<<endl;
        cin>>a;
    }
    void get(aman a){
      cout<<this->a<<a.a<<endl;
    }
};
int main()
{
    aman a;
    aman a1;
    a.take();
    a1.take();
   a.get(a1);
    return 0;
}