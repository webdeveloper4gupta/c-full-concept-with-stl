#include<iostream>
using namespace std;
int& aman()
{
 static int a=9;
    return a;
}
int main()
{
    int k;
   k= aman();
   cout<<k<<endl;
    return 0;
}