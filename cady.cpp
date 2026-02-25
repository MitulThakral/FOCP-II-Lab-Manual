#include<iostream>
using namespace std;
class Candy
{
    string color;
    int points;
    public:
    void setCandy(string,int);
    void displayCandy();
};
void Candy::setCandy(string c,int p)
{
    color=c;
    points=p;
}
void Candy::displayCandy()
{
    cout<<"\n color is "<<color<<endl;
    cout<<"\n points is "<<points<<endl;
}
int main()
{
    Candy c1,c2;
    c1.setCandy("blue",35);
    c2.setCandy("red",38);
    c1.displayCandy();
    c2.displayCandy();
}