#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v={1,2,3,4,5,6,7,8,9};
    cout<<v.size()<<endl;
    cout<<v.max_size()<<endl;
    cout<<v.capacity()<<endl;
    v.resize(990);
      cout<<v.size()<<endl;
      v.push_back(78);
      v.shrink_to_fit();
      cout<<v.capacity()<<endl;
    cout<<v.max_size()<<endl;
    return 0;
}