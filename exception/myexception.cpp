#include<iostream>
using namespace std;
class amans:public exception{
    public:
    amans()
    {
      cout<<"error comes into amana function"<<endl;
    }
    amans( int c)
    {

    }
   static void error()
        {
            cout<<"error cause"<<endl;
        }
    
};
void aman(int a,int b)
{
    int c;
    if(b==0){
       
        throw amans();
    }
}
int main()
{
    int a=1,b=0;
    try{
        aman(a,b);
    }
    catch(amans a)
    {
  cout<<"error comes"<<endl;
    }
    return 0;
}