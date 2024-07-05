/*Write a program to demonstrate a Rock Paper Scissor Game*/
#include<iostream>
using namespace std;
int main()
{
    string name;
    int n,i,choice,num,user=0,pc=0;
    cout<<"\n"<<"*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*";
    cout<<"\n"<<"                       NAME                         ";
    cout<<"\n"<<"*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*";
    cout<<"\nEnte Your Name : ";
    cin>>name;
    cout<<"\n";
    cout<<"\n"<<"*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*";
    cout<<"\n"<<"                       ROUND                         ";
    cout<<"\n"<<"*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*";
    cout<<"\n";
    cout<<name<<" How many Round you play? : ";
    cin>>n;
    cout<<"\n"<<"*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*";
    cout<<"\n"<<"                       GAME                         ";
    cout<<"\n"<<"*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*";
    cout<<"\n";
    for(i=1;i<=n;i++)
    {
        cout<<"\n"<<"Round Number : "<<i<<"/"<<n;
        cout<<"\n"<<"1) ROCK";
        cout<<"\n"<<"2) PAPER";
        cout<<"\n"<<"3) SCISSOR";

        cout<<"\n"<<"Enter Your Choice : ";
        cin>>choice;
        
        
        num=(rand()%3)+1;
        cout<<"\n"<<"Computer Choice  = "<<num;

        if(choice==1 && num==1)
        {
            cout<<"\n"<<"Match is Draw";
        }
        else if(choice==1 && num==2)
        {
            cout<<"\n"<<"Computer is won";
            pc++;
        }     
        else if (choice==1 && num==3)
        {
            cout<<"\n"<<name<<" is won";
            user++; 
        }
        else if(choice==2 && num==1)
        {
            cout<<"\n"<<name<<" is won";
            user++; 
        }
        else if(choice==2 && num==2)
        {
            cout<<"\n"<<"Match is Draw";
        }
        else if(choice==2 && num==3)
        {
            cout<<"\n"<<"Computer is won";
            pc++;
        }   
        else if(choice==3 && num==1)
        {
            cout<<"\n"<<"Computer is won";
            pc++;
        }    
        else if(choice==3 && num==2)
        {
            cout<<"\n"<<name<<" is won";
            user++; 
        }
        else if(choice==3 && num==3)
        {
            cout<<"\n"<<"Match is Draw";
        }
        else
        {
            cout<<"\nInviled choice ";
            break;
        }
        cout<<"\n";

        cout<<"\n"<<name<<" Points    =   "<<user;
        cout<<"\n"<<"Computer Points  =   "<<pc;

        cout<<"\n"<<"========================================";
    }
    if(user>pc)
    {
        cout<<"\n"<<name<<" is won this game";
    }
    else if(user<pc)
    {
        cout<<"\n"<<"Computer is won this game";
    }
    else
    {
        cout<<"\n"<<"Match is Draw";
    }
}