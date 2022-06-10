#include<iostream>
using namespace std;
int aman()
{
    static int k;
    k++;
    return k;
}
int main()
{
    int k;
    k=aman();
    cout<<"the value of k is"<<k<<endl;
    k=aman();
    cout<<"the value of k is"<<k<<endl;
    return 0;
}