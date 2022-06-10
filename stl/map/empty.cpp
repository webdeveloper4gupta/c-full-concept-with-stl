#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string> m;
    if(m.empty()){
        cout<<"empty"<<endl;
    }
    else{
        cout<<"non empty"<<endl;
    }
    return 0;
}