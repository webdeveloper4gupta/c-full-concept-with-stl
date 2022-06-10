#include<iostream>
using namespace std;
void aman(int a,int b) throw(int)
{
    int c;
    if(b==0){
        // throw 'a'; it gives error
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