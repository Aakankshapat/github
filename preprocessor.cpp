#include<iostream>
#define PI 3.14
using namespace std;
int main()
{
    double radius;
    double area;
    cout<<"enter radius ";
    cin>>radius;
    area=PI*radius*radius;
    cout<<"area is "<<area;
    return 0;
}