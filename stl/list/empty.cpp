#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l1={1,2,3,4,5};
    if(l1.empty()){
        cout<<"list is empty"<<endl;
    }
        else{
            cout<<"list is not empty"<<endl;
    }
    return 0;
}