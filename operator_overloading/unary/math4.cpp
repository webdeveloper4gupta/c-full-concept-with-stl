#include<iostream>
using namespace std;
class aman{
int a;
public:
aman()
{

}
aman(int a){
  this->a=a;
}
void get()
{
    cout<<"enter the value of a "<<endl;
    cin>>a;
}
aman operator-(){
    
    return aman(-a);
}
void print()
{
    cout<<a<<endl;
}
};
int main()
{
    aman a,b;
    a.get();
    b=-a;
    b.print();
    return 0;
}