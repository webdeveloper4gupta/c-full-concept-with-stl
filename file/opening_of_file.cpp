#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    // method 1
    ofstream out("aman.txt");
    out<<"mahajna shab zinda baad"<<endl;
    out.close();
    return 0;
}