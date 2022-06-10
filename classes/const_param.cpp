#include<iostream>
using namespace std;
class aman{
int a;
int b;
public:
void get(int const a,const int b){
    this->a=a;
    this->b=b; 
    this->b++;
    // b++; this give error as i cannot change the parameter;
}
void print()const{
    cout<<a<<" "<<b<<endl;
}
};
int main()
{
    aman a;
    a.get(1,2);
    a.print();
    return 0;
}