#include<iostream>
using namespace std;
void aman(int a,int b)
{
    int c;
    if(b==0){
        throw 101;
    }
    c=a/b;
    cout<<c<<endl;

}
int main()
{
    int a,b;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    try{
       aman(a,b);
    }
    catch(int x){
     cout<<"integer exception call"<<endl;
    }
    return 0;
}