#include<iostream>
using namespace std;

int main()
{
    int num,i;
    cout<<"enter the number"<<endl;
    cin>>num;
    int sum=0;
   for(i=1;i<num;i++){
       if(num%i==0){
           sum+=i;
       }
   }
   if(sum==num){
       cout<<"perfect number"<<endl;
   }
   else{
       cout<<"non perfect number"<<endl;
   }
    return 0;
}