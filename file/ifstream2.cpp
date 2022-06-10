#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream in("aman.txt",ios::in);
    char c;
    in>>c;
    cout<<c<<endl;
    in.close();
    return 0;
}