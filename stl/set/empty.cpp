#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s={1,2,3};
    s.insert(12);
    if(s.empty()){
        cout<<"empty"<<endl;
    }
    else{
        cout<<"non empty"<<endl;
    }
    return 0;
}
