#include<iostream>
using namespace std;
class aman{
    int a;int *p;
    public:
    aman(int n){
        this->a=n;
        p=new int[n];
        int i;
        for(i=0;i<n;i++){
            cout<<"enter the value"<<endl;
            cin>>p[i];
        }

    }
    void print()
    {
        int i;
        for(i=0;i<a;i++){
            cout<<p[i]<<endl;
        }
    }
};
int main()
{
    aman a(5);
    a.print();
    return 0;
}