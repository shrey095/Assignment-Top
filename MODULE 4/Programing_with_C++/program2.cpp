/*Define a class to represent a bank account. Include the following members:
1. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
2. Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance*/
#include<iostream>
using namespace std;
class bank_system
{
    private:
            string name_of_depositer,type_of_ac;
            int ac_no,balance;
    public:
            void get()
            {
                cout<<"Enter the Name of Depositer : ";
                cin>>name_of_depositer;
                cout<<"\n"<<"Enter the type of Account : ";
                cin>>type_of_ac;
                cout<<"\n"<<"Enter the Account Number : ";
                cin>>ac_no;
                cout<<"\n"<<"Enter the Balance : ";
                cin>>balance;
            }
            void deposite()
            {
                int dep;
                cout<<"Enter the Deposite Amt : ";
                cin>>dep;
                balance=balance+dep;

                cout<<"\n"<<"Total Balance = "<<balance;
            }
            void withdraw()
            {
                int wit;
                cout<<"Enter the Withdraw Amt : ";
                cin>>wit;
                if(wit>balance)
                {
                    cout<<"\n"<<"Not Posibule";
                }
                else
                {
                    balance=balance-wit;
                    cout<<"\n"<<"Total Balance = "<<balance;
                }
            }
};

int main()
{
    bank_system c1;
    int choice;
    c1.get();
    cout<<"Enter the Choice : ";
    cin>>choice;
    switch(choice)
    {
        case 1:
                c1.deposite();
                break;
        case 2:
                c1.withdraw();
                break;
        default :
                cout<<"\nInvailed choice";
    }
    return 0;
}

