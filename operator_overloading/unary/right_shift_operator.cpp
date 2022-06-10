#include<iostream>
using namespace std;
class aman{
int a;
public:
friend void operator >>(istream &k, aman &a){
    k>>a.a;
}
void print()
{
    cout<<a<<endl;
}
};
int main()
{
    aman a;
    cin>>a;
    a.print();
    return 0;
}