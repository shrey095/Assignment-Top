/*WAP to create simple calculator using class*/
#include<iostream>
using namespace std;
class calculator
{
private:
    int n1,n2;
    float ans;

public:
    void get()
    {
        cout<<"Enter the Number 1 : ";
        cin>>n1;
        cout<<"Enter the Number 2 : ";
        cin>>n2;
    }
    void add()
    {
        ans=n1+n2;
        cout<<"\n"<<"Addition = "<<ans;
    }
    void sub()
    {
        ans=n1-n2;
        cout<<"\n"<<"Subtraction = "<<ans;
    }
    void mul()
    {
        ans=n1*n2;
        cout<<"\n"<<"Multiplication = "<<ans;
    }
    void div()
    {
        ans=(float)n1/n2;
        cout<<"\n"<<"Division = "<<ans;
    }
    void mod()
    {
        ans=n1%n2;
        cout<<"\n"<<"Modulo = "<<ans;
    }
};
int main()
{
    calculator c1;
    char choice;
    cout<<"Enter the Choice : ";
    cin>>choice;
    if(choice=='+'||choice=='-'||choice=='*'||choice=='/'||choice=='%')
    {
        c1.get();
    }
    switch(choice)
    {
        case '+':
                c1.add();
                break;
        case '-':
                c1.sub();
                break;
        case '*':
                c1.mul();
                break;
        case '/':
                c1.div();
                break;
        case '%':
                c1.mod();
                break;

        default :
                cout<<"\nInvailed choice";
                break;
    }

    return 0;
}