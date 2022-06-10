#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    try{
        if(b==0){
            throw 10.5;
        }
        else if(a==0){
            throw "aman";
        }
        c=a/b;
        cout<<c<<endl;
    }
    catch(int x){
   cout<<"integer exception"<<endl;
    }
    catch(char c){
    cout<<"character exception"<<endl;
    }
    catch(string s){
     cout<<"string exception"<<endl;
    }
    catch(float f){
      cout<<"float exception"<<endl;
    }
    catch(double d){
   cout<<"double exception"<<endl;
    }
    catch(...){
      cout<<"general block"<<endl;
    }
    return 0;
}