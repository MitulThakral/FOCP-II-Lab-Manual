#include<iostream>
using namespace std;
class Shape
{
    public:
    void draw()
    {
        cout<<"DRAWING SHAPE "<<endl;
    }
};
class Circle:public Shape
{
    public:
    void area()
    {
        float r;
        cout<<"enter the radius ";
        cin>>r;
        cout<<"area of circle is "<<3.14*r*r<<endl;
    }
};
class Rectangle:public Shape
{
    public:
    void area()
    {
        int l,b;
        cout<<"enter the length and breadth ";
        cin>>l>>b;
        cout<<"area of rectangle "<<l*b<<endl;
    }
};
int main()
{
    Circle c;
    Rectangle r;
    cout<<"about circle "<<endl;
    c.draw();
    c.area();
    cout<<"about rectangle "<<endl;
    r.draw();
    r.area();
}