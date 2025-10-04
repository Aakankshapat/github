#include<iostream>
using namespace std;
class calculator
{
    public:
    int n1;
    int n2;
    char sign;
    char chr;

    int input(){
        cout<<"enter the sign";
        cin>>sign;
        cout<<"enter n1:";
        cin>>n1;
        cout<<"enter the n2:";
        cin>>n2;
        cout<<"press y or Y for continue";
        cin>>chr;
    }
    int display()
    {
        switch(sign)
        {
        case '+':    
        cout<<"addition is:"<<n1+n2<<endl;
        break;
        case '*':
        cout<<"multiplication is :"<<n1*n2<<endl;
        break;
        case '/':
        if(n2 !=0)
        cout<<"division is :"<<n1/n2<<endl;
        break;
        case '-':
        cout<<"substraction is :"<<n1-n2<<endl;
        break;
    }
}
};
int main()
{
    int i;
    char chr;
    int n;
  cout<<"enter n:";
  cin>>n;
        calculator b1;
        
   
        for(i=1;i<=n;i++)
        {
        do 
        {
        cout<<"start operation";
        b1.input();
        cout<<"output is :";
        b1.display();
    }while(chr=='y' || chr=='Y');
    
}

    return 0;
}

