#include<iostream>
using namespace std;
class Candy
{
    string color;
    int points;
    public:
    Candy();
    Candy(string clr);
    Candy(string clr,int pts);
    void setCandy(string,int);
    void displayCandy();
    void looseCandy();
    void looseCandy(int);
    void gaincandy();
    void gaincandy(int);
};
void Candy::looseCandy()
{
    points-=2;
    if(points<0)
    {
        points=0;
    }
}
void Candy::looseCandy(int pointsreduce)
{
    points-=pointsreduce;
    if(points<0)
    {
        points=0;
    }
}
 void Candy::gaincandy()
{
    points+=2;
}
void Candy::gaincandy(int pointsgain)
{
    points+=pointsgain;
}
Candy::Candy(string clr)
{
    color=clr;
    points=0;
}
Candy::Candy(string clr,int pts)
{
    color=clr;
    points=pts;
}
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
   Candy c1;
   c1.gaincandy();
   c1.gaincandy(10);
   c1.displayCandy();
   return 0;
}