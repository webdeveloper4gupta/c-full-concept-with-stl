#include<iostream>
using namespace std;
// use to handle run time excpetion
int main()
{
    int a;
    int b;
    int c;
    cout<<"enter the value of a and b but b must nnot be equal to zero"<<endl;
    cin>>a>>b;
    try{
        if(b==0){
            throw 101;
        }
    c=a/b;
    
    cout<<c<<endl;
    }
    catch(int n){
        cout<<"exception occur"<<n<<endl;
    }
   
    return 0;
}