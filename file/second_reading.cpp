#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream in;
    in.open("aman.txt");
    char c;
    while(!(in.eof())){
      cout<<c;
        // in>>c;
        in.get(c);//with space
    }
    return 0;
}