// class that has no name
// class does not have costructor and destructor
// cannot have return value
// object cannot passed as argument
#include<iostream>
using namespace std;
typedef class {
int a;
public:
void get()
{
    cout<<"the get function of anonymous class"<<endl;
}
}aman;
int main()
{
    aman a;
    a.get();
    return 0;
}