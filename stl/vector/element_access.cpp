#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v={1,2,3,4,5,6,7,8,9};
    int i;
    cout<<v[0]<<endl;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    cout<<v.at(2)<<endl;
    int *a=v.data();
    cout<<*a<<endl;
    cout<<*a++<<endl;
    cout<<*a<<endl;
    // cout<<v.data()<<endl;//it returns the pointers to first element
    return 0;
}