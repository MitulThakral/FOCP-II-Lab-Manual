#include<iostream>
using namespace std;
class Movieticket
{
    string moviename;
    int seatno;
    int ticketprice;
    bool isbooked;
    public:
    Movieticket();
    Movieticket(string name,int seat,int price,bool state);
    void bookticket();
    void cancelticket();
    double calculatetotalcost(int noofticket);
    void display();
};
Movieticket::Movieticket()
{
    moviename="unknown";
    seatno=0;
    ticketprice=200;
    isbooked=false;
}
Movieticket::Movieticket(string name,int seat,int price,bool state)
{
    moviename=name;
    seatno=seat;
    ticketprice=price;
    isbooked=state;
}
void Movieticket::bookticket()
{
    if(!isbooked)
    {
        isbooked=true;
    }
    else{
        cout<<"ticket is already booked";
    }
}
void Movieticket::cancelticket()
{
    if(isbooked)
    {
        isbooked=false;
    }
    else
    {
        cout<<"ticket not booked";
    }
}
double Movieticket::calculatetotalcost(int noofticket)
{
    return ticketprice*noofticket;
}
void Movieticket::display()
{
    cout<<"\n movie name"<<moviename<<endl;
    cout<<"seat no "<<seatno<<endl;
    cout<<"ticket price "<<ticketprice<<endl;
    cout<<"booking status"<<isbooked<<endl;

}
int main()
{
    string nameofmovie;
    int s;
    int priceee;
    bool is;
    cout<<"enter the name of movie, seat no if booked ,price of ticket and tell wether the ticket is booked";
    cin>>nameofmovie>>s>>priceee>>is;
    Movieticket m1;
    Movieticket m2(nameofmovie,s,priceee,is);
    m1.display();
    m1.cancelticket();
    m2.display();
    m2.bookticket();
    m2.display();
    m2.calculatetotalcost(5);
    return 0;
}