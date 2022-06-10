#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    int i;
    int n1;
    cout<<"enter the number of element you want to push in the vector"<<endl;
    cin>>n1;
    for(i=0;i<n1;i++){
        cin>>n;
        v.push_back(n);
    }
    cout<<"before deleting"<<endl;
    for(i=0;i<v.size();i++){
         cout<<v[i]<<endl;
    }
    v.pop_back();
    cout<<"after deleting"<<endl;
        for(i=0;i<v.size();i++){
         cout<<v[i]<<endl;
    }
    return 0;
}