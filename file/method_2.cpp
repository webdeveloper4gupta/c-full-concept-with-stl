#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream out;
    out.open("aman.txt");
    out<<"mahajan sahab zinda hai";
    out.close();
    return 0;
}