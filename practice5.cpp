#include<iostream>
using namespace std;
class Candy
{
    string color;
    int points;
    public:
    void setcandy(string c,int p);
    void displaydetails();
};
void Candy::setcandy(string c,int p)
{
    color=c;
    points=p;
}
void Candy::displaydetails()
{
    cout<<"color of the candy "<<color<<endl;
    cout<<"points of the candy "<<points<<endl;
}
int main()
{
    Candy c1,c2;
    c1.setcandy("red",57);
    c2.setcandy("blue",56);
    c1.displaydetails();
    c2.displaydetails();
}