#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream out;
    out.open("amans.txt");
    out<<"mahajan sahab";
    cout<<out.tellp()<<endl;
    out.close();
    ifstream in;
    in.open("amans.txt",ios::in);
    cout<<in.tellg()<<endl;
    in.close();
    return 0;
}