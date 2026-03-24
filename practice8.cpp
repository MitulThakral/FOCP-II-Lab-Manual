#include<iostream>
using namespace std;
class Electricitybill
{
    string consumername;
    int units;
    float billamount;
    public:
    Electricitybill();
    Electricitybill(string name,int u);
    void calculatebill();
    void displaybill();
};
Electricitybill::Electricitybill()
{
    consumername="unknown";
    units=0;
    billamount=0;
}
Electricitybill::Electricitybill(string name,int u)
{
    consumername=name;
    units=u;
    billamount=0;
}
void Electricitybill::calculatebill()
{
    if(units<=100)
    {
        billamount=units*5;
    }
    else if(units<=200)
    {
        billamount=(100*5)+(units-100)*7;
    }
    else
    {
        billamount=(100*5)+(100*7)+(units-200)*10;
    }
}
void Electricitybill::displaybill()
{
    cout<<" \n name is"<<consumername<<endl;
    cout<<" units "<<units<<endl;
    cout<<" bill is"<<billamount<<endl;
}
int main()
{
    string n;
    int units;
    cout<<"enter the name units and amount";
    cin>>n>>units;
    Electricitybill e1;
    Electricitybill e2(n,units);
    e1.calculatebill();
    e1.displaybill();
    e2.calculatebill();
    e2.displaybill();
    return 0;
}