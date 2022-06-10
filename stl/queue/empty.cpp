#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q;
    
    if(q.empty()){
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"queue is full"<<endl;
    }
    return 0;
}