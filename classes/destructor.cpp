#include<iostream>
using namespace std;
class aman{
    int a;
    int b;
    public:
    int i=0;
     aman(){
       cout<<"zero argument constructor"<< i++<<endl;
   }
   aman(int a ,int b){
       cout<<"paramaterised constructor"<<i++<<endl;
   }
   aman(aman &a1){
      a=a1.a;
      cout<<"copy constructor"<<i++<<endl;
   }
   ~aman(){
       cout<<"destructor called"<<endl;
   }

};
int main()
{
    aman a1;
    aman a2(1,2);
    aman a3(a2);


    return 0;
}