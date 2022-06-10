#include<iostream>
using namespace std;
enum aman{
    sunday=0,
    monday=1,
    tueday=2,
    wednesday=3
    ,thursday
};
int main()
{
    aman a=sunday;
    // cout<<a<<endl;
    int i;
  for(i=sunday;i!=thursday;i++){
      cout<<i<<endl;
  }
    return 0;
}