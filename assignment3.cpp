#include<iostream>
using namespace std;
class BankAccount
{
    string accountHolderName;
	int accountNumber;
	double balance;
    public:
    BankAccount(string,int,double);
    void inputDetails();
    void displayDetails();
    void deposit(double amount);
	void withdraw(double amount);
};
BankAccount::BankAccount(string name,int number,double b)
{
    accountHolderName=name;
    accountNumber=number;
    balance=b;
}

void BankAccount::deposit(double amount)
{
    balance+=amount;
    cout<<"balance after deposit is "<<balance<<endl;
}
    
void BankAccount::withdraw(double amount)
{
    if(amount>balance)
    {
        cout<<"insufficent balance";
    }
    else{
        balance-=amount;
    }
    cout<<"after withdrawl "<<balance<<endl;
}
void BankAccount::displayDetails()
{
    cout<<"after withdrawl"<<balance<<endl;
}
int main()
{
    BankAccount b1("mitul",25852,5000);

    //b1.inputDetails();
    b1.displayDetails();
    b1.deposit(10000);
    b1.withdraw(5000);
    return 0;
}