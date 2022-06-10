#include<iostream>
using namespace std;
class aman{
int a;
int b;
public:
void operator()(int a,int b){
    this->a=a;
    this->b=b;
}
void print(){
    cout<<a<<" "<<b<<endl;
}
};
int main()
{
    aman a;
    a(1,2);
    a.print();
    return 0;
}