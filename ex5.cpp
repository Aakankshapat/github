#include<iostream>
using namespace std;
class shape {
    
    public:
    void area(int l,int b)
{
    
    cout<<"area of rectringle is :"<<l*b<<endl;
}

 void area(double a)
{
    
     cout<<"area of square is :"<<a*a<<endl;
    
}


void area(int r)
{
    
     cout<<"area of circle is :"<<3.14*r*r<<endl;
    
}
};

int main()
{
    shape b1;
   
   b1.area(4,5);
  b1.area(3.45);
b1.area(2);
return 0;
}
