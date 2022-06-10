// here i want to run same name function with same paramter but compilier cause ambigity so to reduce ambigity we use namespace encapluslation
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


int main()
{
   first::fun();
   second::fun();
    return 0;
}