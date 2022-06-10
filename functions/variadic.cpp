#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void aman(int argc,...)
{
   va_list args;
   int i,sum=0;
   va_start(args,argc);
   for(i=0;i<argc;i++){
       sum=va_arg(args,int);
       cout<<sum;
   }
   va_end(args);
}
int main()
{
  aman(1,2,3,4,5,6,7,8,9,9);
    return 0;
}