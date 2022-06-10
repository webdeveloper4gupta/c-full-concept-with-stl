  #include<iostream>
  using namespace std;
  
  int main()
  {
      int a=9;
     const int *b=&a;
    //   cout<<++(*b)<<endl;  it gives error now i decaled pointer as constant
       int y=90;
       b=&y;
    //  cout<<++(*b)<<endl; still giving error
     
      return 0;
  }