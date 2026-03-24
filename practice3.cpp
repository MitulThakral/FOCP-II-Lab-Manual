#include<iostream>
using namespace std;
class Bankaccount
{
string accountHolderName;
int accountNumber;
double balance;
public:
Bankaccount();
Bankaccount(string n,int no,int ba);
void deposit(double amount);
void withdraw(double amount);
void display();
};
Bankaccount::Bankaccount(string n,int no, int ba)
{
    accountHolderName=n;
    accountNumber=no;
    balance=ba;
}
void Bankaccount::deposit(double amount)
{
    balance+=amount;
    cout<<"money added"<<balance;
}
void Bankaccount::withdraw(double amount)
{
    if(amount>balance)
    {
        cout<<"not sufficient balance";
    }
    else
    balance-=amount;
    cout<<"withdrawl successfully"<<balance;
}
void Bankaccount::display()
{
cout<<"account name"<<accountHolderName<<endl;
cout<<"acoount number"<<accountNumber<<endl;
cout<<"balance"<<balance<<endl;
}
int main()
{
    string n;
    int numb,choice;
    double bala;
    cout<<"enter the name";
    cin>>n;
    cout<<"enter the account number";
    cin>>numb;
    cout<<"enter the balance";
    cin>>bala;
    Bankaccount b(n,numb,bala);
    cout<<"enter the choice";
    cin>>choice;
    if(choice=='D')
    {
        b.deposit(5000);
    }
    else{
        b.withdraw(12000);
    }
    b.display();
    return 0;
}