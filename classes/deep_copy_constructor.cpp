#include<bits/stdc++.h>
using namespace std;
class aman{
int a;
int b;
int *p;
public:
aman(int s){
    a=s;
}
aman( aman &a1){
  a=a1.a;
  p=new int(a);
}
};

int main()
{
   aman a1(1);
   aman a2(a1);

}