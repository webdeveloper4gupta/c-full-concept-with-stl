#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
  if(s.empty()){
    cout<<"empty"<<endl;
  }
  else{
    cout<<"not empty"<<endl;
  }

  
    return 0;
}