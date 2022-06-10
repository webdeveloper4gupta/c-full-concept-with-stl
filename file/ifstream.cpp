#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream in;
    char c;
    in.open("aman.txt",ios::in);
    in>>c;
    cout<<c<<endl;
    in.close();
    return 0;
}