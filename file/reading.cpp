#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream in;
    in.open("aman.txt",ios::in);
    char c;
    while(in){
        cout<<c;
        in>>c;
        
    }
    return 0;
}