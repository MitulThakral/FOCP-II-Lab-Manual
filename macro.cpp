#include<iostream>
using namespace std;
#define PI 3.14
int main()
{
    int r,l;
    cout<<"enter the value for r and l";
    cin>>r>>l;
    double area=PI*r*r;
    double area1=PI*r*l;
    cout<<"area of circle is "<<area<<endl;
    cout<<"area of cone is "<<area1<<endl;
    return 0;
}