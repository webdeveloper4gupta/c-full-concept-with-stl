#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char c;
    ifstream in;
    in.open("aman.txt");
    
    ofstream out;
    out.open("mahajan.txt",ios::app);
    while(!(in.eof())){
        out<<c;
        in.get(c);
    }
    out.close();
    in.close();
    return 0;
}