#include<iostream>
using namespace std;
class Rectangle
{
    float length;
    float width;
    public:
    void inputDimensions()
    {
        cout<<"enter the length and width";
        cin>>length>>width;
    }
    float calculateArea()
    {
        return length*width;
    }
	float calculatePerimeter()
    {
        return 2*(length+width);
    }
    void displayResult()
    {
        cout<<"area is"<<calculateArea()<<endl;
        cout<<"perimeter is"<<calculatePerimeter()<<endl;
    }
};
int main()
{
    Rectangle r1;
    r1.inputDimensions();
    r1.displayResult();
    return 0;
}