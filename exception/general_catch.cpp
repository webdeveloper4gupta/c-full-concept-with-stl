#include<iostream>
using namespace std;

int main()
{
    int a;
    int b,c;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    try{
      if(b==0){
          throw 101;
      }
      c=a/b;
      cout<<c<<endl;
    }
    catch(int a){
      cout<<"integer "<<" "<<"exceprion occur"<<endl;
    }
    catch(...){
     cout<<"general catch block"<<endl;
    }
    return 0;
}