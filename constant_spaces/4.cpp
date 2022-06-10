#include<iostream>
using namespace std;
class aman{
int a;
int b;
public:
aman()
{
    cout<<"aman class zero argument constrcutor0"<<endl;
}
void get(int a,int b) const
{
a++;
// this->a++; this will give error
}
};
int main()
{
    aman a;
    return 0;
}