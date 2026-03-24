#include<iostream>
using namespace std;
class Rectangle
{
    float length;
    float width;
    public:
    Rectangle();
    Rectangle(float l,float w);
    float calculatearea();
    float calculateperimeter();
    void display();
};
Rectangle::Rectangle(float l,float w)
{
    length=l;
    width=w;
}
float Rectangle::calculatearea()
{
    int area;
    area=length*width;
    return area;
}
float Rectangle::calculateperimeter()
{
    int perimeter;
    perimeter=2*(length+width);
    return perimeter;
}
void Rectangle::display()
{
    cout<<"area is "<<calculatearea()<<endl;
    cout<<"perimeter is "<<calculateperimeter()<<endl;
}
int main()
{
    int l;
    int w;
    cout<<"enter the length and width";
    cin>>l>>w;
    Rectangle r(l,w);
    r.display();
    return 0;
}