#include<iostream>
using namespace std;
namespace first{
void fun()
{
    cout<<"first fun"<<endl;
}
}
namespace second{
void fun()
{
    cout<<"second fun"<<endl;
}
}

using namespace first;
int main()
{
   fun();
   second::fun();
    return 0;
}