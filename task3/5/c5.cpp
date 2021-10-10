#include <iostream>
using namespace std;
struct account
{
    string name;
    int account_number;
    int balance;
};
struct account balance(struct account wave[])
{
    int i;
    cout<<"Enter the balance:";
    cin>>wave[i].balance;
    for(i=0;i<4;i++)
    {
        if(wave[i].balance<200)
        {
            cout<<wave[i].name;
        }
    }
    return wave[i];
};
struct account add_money(struct account wave[])
{
    int i,total;
    cout<<"How much money You want to add:";
    cin>>wave[i].balance;
    for(i=0;i<4;i++)
    {
        if(wave[i].balance>1000)
        {
           // cout<<balance=balance+wave[i].balance;
        }

    }





};
int main(int argc, char *argv[])
{
    struct account wave[7];
    int i;
    cout<<"Enter total 13 customers information\n";
    for(int i=0;i<4;i++)
    {
        cout<<"Enter the name"<<i+1<<":";
        cin>>wave[i].name;
        cout<<"\nEnter the account number:";
        cin>>wave[i].account_number;
        cout<<"\nEnter the balance:";
        cin>>wave[i].balance;
    }
      cout<<"\nEnter the balance to see the name of customers\n";
      balance(wave);
       cout<<"ADD money to those account which balance More than 1000 dollar\n";
       add_money(wave);
///sorry sir add money option ta milaite pari nai,
}
