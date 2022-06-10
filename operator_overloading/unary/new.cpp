#include<iostream>
using namespace std;
class aman{
int a;
public:
aman()
{
    cout<<"this is zero argument consructor"<<endl;
}
void * operator new(size_t size){
    void *p;
    p=(void *) malloc(size);
   return p;
}
  void operator delete(void *p)
    {
        cout<<"user defined delete opertor called"<<endl;
        free(p);
    }
};
int main()
{ 
    aman *a=new aman();
    delete a;  
    return 0;
}