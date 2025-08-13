#include<iostream>
using namespace std;
int main()
{ 
   char y;
   int a, b;
   int n;
  

  do{
   cout << "Press 1 for add, 2 for sub, 3 for div, 4 for mul: ";
   cin >> n;
    cout << "Enter two numbers: ";
   cin >> a >> b;
    switch(n)
   {
      case 1:
         cout << "add: " << a + b << endl;
         break;
      case 2:
         cout << "sub: " << a - b << endl;
         break;
      case 3:
         if (b != 0)
            cout << "div: " << a / b << endl;
         else
            cout << "Error: Division by zero!" << endl;
         break;
      case 4:
         cout << "mul: " << a * b << endl;
         break;
      default:
      break;
         
   }
    
   cout<<"if you want to contenue then press y";
   cin>>y;
  
}while(y=='y');
   return n;
}