#include<iostream>
#include<string>
using namespace std;
class bank
{   public:
    string name;
    int acc_no;
    float bal;
    int n;
    public:
    bank(){
        acc_no=0;
        bal=0;
    }
    int input()
    {
        
        cout<<"enter name";
        cin>>name;
        cout<<"enter acc_no";
        cin>>acc_no;
        cout<<"enter balance";
        cin>>bal;
    }
    int display()
    {
        cout<<"name is :"<<name<<endl;
        cout<<"account no is :"<<acc_no<<endl;
        cout<<"balance is :"<<bal<<endl;
    }
};
int main()
{
    int n;
    cout<<"enter the n";
    cin>>n;
    int i;
    bank b1;
    for(i=1;i<=n;i++)
    {
    cout<<"enter bank details"<<endl;
    b1.input();
    cout<<"bank details as follows"<<endl;    
    b1.display();
    }
    return 0;
}