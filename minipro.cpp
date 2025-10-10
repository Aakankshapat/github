#include<iostream>
#include<string.h>
using namespace std;
 class calculate
 {
    public:
    char sign;
    int a;
    int b;
    char y;
    public:
    int d;
     
    void input(){
     cout<<"enter a";
     cin>>a;
     cout<<"enter b";
     cin>>b; 
     
    }
    
    void add()
    {
        cout<<"addition is :"<<a+b<<endl;
    }

    void mul()
    {
        cout<<"multiplication is :"<<a*b<<endl;
    }
    
    void divi()
    {
        if(b!=0)
        cout<<" division is :"<<a/b<<endl;
        else
        cout<<"invalid input";
    }
    
    void sub()
    {
        cout<<"subtraction is :"<<a-b<<endl;
    }
  };
 
 int main()
 {    
    int d;
    cout<<" enter 1 for addition,2 for multipication,3 for division,4 for subtraction :";
     cin>>d;
    calculate b1;
    b1.input();
    if(d==1)
    b1.add();
    if(d==2)
    b1.mul();
    if(d==3)
    b1.divi();
    if(d==4)
    b1.sub();
    return 0;
 }