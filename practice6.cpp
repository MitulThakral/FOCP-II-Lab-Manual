#include<iostream>
using namespace std;
class Smartlight
{
    string brand;
    int brightness;
    bool ison;
    public:
    Smartlight();
    Smartlight(string b,int br,bool state);
    void turnon();
    void turnof();
    void increasebrightness();
    void decreasebrightness();
    void display();
    ~Smartlight();
};
Smartlight::Smartlight()
{
    brand="unknown";
    brightness=50;
    ison=false;
}
Smartlight::Smartlight(string b,int br,bool state)
{
    brand=b;
    brightness=br;
    ison=state;
}
void Smartlight::turnon()
{
    ison=true;
}
void Smartlight::turnof()
{
    ison=false;
}
void Smartlight::increasebrightness()
{
    if(brightness<100)
    {
        brightness+=10;
    }
}
void Smartlight::decreasebrightness()
{
    if(brightness>0)
    {
        brightness-=10;
    }
}
void Smartlight::display()
{
    cout<<"\n name of the brand "<<brand<<endl;
    cout<<"brightness"<<brightness<<endl;
    cout<<"on or off "<<ison<<endl;
}
Smartlight::~Smartlight()
{
    cout<<"desructor called"<<endl;
}
int main()
{
    string bran;
    int bri;
    bool on;
    cout<<"enter the brand,enter the brightness and tell wether the lamp is on or not";
    cin>>bran>>bri>>on;
    Smartlight s1;
    Smartlight s2(bran,bri,on);
    s1.display();
    s1.turnon();
    s1.increasebrightness();
    s1.display();
    s2.display();
    s2.decreasebrightness();
    s2.turnof();
    s2.display();
    return 0;
}