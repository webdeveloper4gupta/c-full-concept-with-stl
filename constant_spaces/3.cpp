#include<iostream>
using namespace std;

int main()
{
    int a=90;
    int * const b=&a;
    int c;
    // it gives error so i need to init
    // b=&c; it gives error
    // this consept is called constant pointer
    cout<<"const pointer call"<<endl;
    return 0;
}