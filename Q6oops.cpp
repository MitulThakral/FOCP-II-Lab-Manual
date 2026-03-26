#include<iostream>
using namespace std;
class Device
{
    public:
    void poweron()
    {
        cout<<"device is power on"<<endl;
    }
};
class Computer:public Device
{
    public:
    void process()
    {
        cout<<"processing is very good "<<endl;
    }
};
class Laptop:public Computer
{
    public:
    void carry()
    {
        cout<<"laptop has good performance "<<endl;
    }
};
int main()
{
    Laptop l1;
    l1.poweron();
    l1.process();
    l1.carry();
    return 0;
}