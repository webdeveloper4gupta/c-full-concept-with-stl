#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v={1,2,3,4,5,6,7,8};
    vector<int>::iterator itr;

    int i;
    for(itr=v.begin();itr!=v.end();itr++){
        cout<<*itr<<endl;
    }
      
    cout<<"reverse beginig"<<endl;
   for(auto i=v.rbegin();i!=v.rend();i++){
    cout<<*i<<endl;
   }
   cout<<"constant beginig"<<endl;
   for(auto i=v.cbegin();i!=v.cend();i++){
    cout<<*i<<endl;
   }
   cout<<"reverse consst beginig"<<endl;
   for(auto i=v.crbegin();i!=v.crend();i++){
    cout<<*i<<endl;
   }
    return 0;
}