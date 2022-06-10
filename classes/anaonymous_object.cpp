// object without name is called anonymous object
// it is manadotay it have parametersid constructor
#include<iostream>
using namespace std;
class aman{
    public:
int a;
aman()
{
    this->a=1;
}
aman(int a1){
    a=a1;
}
void get()
{
    cout<<"enter the value of a "<<endl;
    cin>>a;
}
friend aman print(aman &,aman &);
};
aman print(aman &a1,aman &a2){
    return aman(a1.a+a2.a);
}
int main()
{
    aman a1;
    aman a2;
    a1.get();
    a2.get();
    cout<<print(a1,a2).a<<endl;
    return 0;
}