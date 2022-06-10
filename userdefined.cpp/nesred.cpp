#include<iostream>
using namespace std;
struct mahajan{
  int b;
};
struct aman{
    int a;
    struct mahajan m;
};
int main()
{
   struct aman f;
   f.m.b=90;
   f.a=89;
   cout<<f.m.b<<endl;
   cout<<f.a<<endl;
    return 0;
}