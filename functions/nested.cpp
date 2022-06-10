#include<iostream>
using namespace std;
void sukri(){
    cout<<"sukri function"<<endl;
}
void mahajan(){
    sukri();
    cout<<"this is mahajan function"<<endl;
}
void aman()
{
    mahajan();
    cout<<"this is aman function"<<endl;
}
int main()
{
    aman();
    cout<<"after running all functins"<<endl;
}