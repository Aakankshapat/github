#include<iostream>
#define PI 3.14
using namespace std;
int main()
{
    int radius;
    int area;
    cout<<"enter radius ";
    cin>>radius;
    area=PI*radius*radius;
    cout<<"area is "<<double(area);
    return 0;
}