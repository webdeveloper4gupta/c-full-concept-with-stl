#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    try{
        if(a==0){
            throw 101;
        }
            try{
                if(b==0){
                    throw 900;
                }
            }
                catch(float v){
                    cout<<"eror in inner try-catch block"<<endl;
                      
                  }
        

    }
    catch(int y){
   cout<<"error in outer block"<<endl;
    }
    return 0;
}