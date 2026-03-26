#include<iostream>
using namespace std;
class Account
{
    protected:
    int accno;
    int balance;
    public:
    Account(int accno,int balance)
    {
        this->accno=accno;
        this->balance=balance;
    }
    void displayaccount()
    {
        cout<<"account number is "<<accno<<endl;
        cout<<"balance is "<<balance<<endl;
    }
};
class Savingaccount: public Account
{
    private:
    double interestrate;
    public:
    Savingaccount(int accno,int balance,double interestrate):Account(accno,balance)
    {
        this->interestrate=interestrate;
    }
    void calculateinterestrate()
    {
        double interest=balance*interestrate/100;
        cout<<"interset is "<<interest<<endl;
    }
};
int main()
{
    Savingaccount s1(12345,85469,7.2);
    s1.displayaccount();
    s1.calculateinterestrate();
    return 0;
}