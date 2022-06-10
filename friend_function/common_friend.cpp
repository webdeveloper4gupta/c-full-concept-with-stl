#include<iostream>
using namespace std;
class mahajan;
class aman{
int a;
public:
void get(){
    this->a=90;
    cout<<"get function of aman class"<<endl;
}
friend void print(aman &a,mahajan &m);
};
class mahajan{
    int a;
    public:
    void get()
    {
        this->a=89;
        cout<<"get method of mahajan class"<<endl;
    }
    friend void print(aman &a,mahajan &m);
};
void print(aman &a,mahajan &m){
   a.a=900;
   m.a=890;
   cout<<a.a<<" "<<m.a<<endl;
}
int main()
{
    aman a;
    mahajan m;
    print(a,m);
    return 0;
}