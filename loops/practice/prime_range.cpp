#include<iostream>
using namespace std;

int main()
{
    int lower,upper,i,j;
    cout<<"enter the lower and upper range"<<endl;
    cin>>lower>>upper;
    for(i=lower;i<=upper;i++){
        for(j=2;j<i;j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i){
            cout<<"prime number is"<<i<<endl;
        }
        
    }

    return 0;
}