#include<iostream>
using namespace std;
class aman{
   int a;int b;
   public:
   aman(){
       cout<<"zero argument constructor"<<endl;
   }
   aman(int a ,int b){
       cout<<"paramaterised constructor"<<endl;
   }
   aman(aman &a1){
      a=a1.a;
      cout<<"copy constructor"<<endl;
   }
};
int main()
{
    aman a;
    aman a1(1,2);
    aman  a2(a1);
    return 0;
}