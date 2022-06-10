#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream in("aman.txt",ios::in);
in.seekg(5,ios::beg);
    char c;
    in>>c;
    cout<<c;
    return 0;
}