#include<iostream>
using namespace std;
int sum(int a,int b)
{
    return a+b;
}
float sum(float c, float d)
{
    return c+d;
}
double sum(double d , double e)
{

    return d+e;
}
int main()
{
    int n1,n2;
    float n3,n4;
    double n5,n6;
    cout<<"enter two number";
    cin>>n1>>n2;
    cout<<"enter third and fourth number";
    cin>>n3>>n4;
    cout<<"enter 5th and 6th ";
    cin>>n5>>n6;
    int add =sum(n1,n2);
    float decimal=sum(n3,n4);
    double big=sum(n5,n6);
    cout<<"this is the int numbers"<<add<<endl;
    cout<<"this is the float sum "<<decimal<<endl;
    cout<<"this is the double sum "<<big<<endl;
}