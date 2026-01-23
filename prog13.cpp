//check which type of triangle it is
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the sides length";
    cin>>a>>b>>c;
    if(a==b&&b==c)
    {
        cout<<"it is an equilateral triangle"<<endl;
    }
    else if(a==b || b==c || a==c)
    {
        cout<<"it is an isosceles triangle"<<endl;
    }
    else
    {
        cout<<"it is an scalene triangle";
    }
    return 0;
}