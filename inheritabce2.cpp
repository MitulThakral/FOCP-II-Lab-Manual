#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    A()
    {
        a=15;
        cout<<"default constructor called"<<endl;
    }
     ~A()
    {
        cout<<"destructor A called"<<endl;
    }
    void displayA()
    {
        cout<<"value of a is "<<a<<endl;
    }
};
class B:virtual public A
{
    public:
    int b;
    B()
    {
        b=45;
        cout<<"second constructor called"<<endl;
    }
       ~B()
    {
        cout<<"destructor called"<<endl;
    }
    void displayB()
    {
        cout<<"value of  b is "<<b<<endl;
    }
};
class C:virtual public A{
    public:
    int c;
    C()
    {
        c=56;
        cout<<"constructor c is called"<<endl;
    }
    ~C()
    {
        cout<<"destructor called "<<endl;
    }
    void displayC()
    {
        cout<<"value of c is "<<c<<endl;
    }
};
class D:public B,public C
{
    public:
    int d;
    D()
    {
        d=86;
        cout<<"default constructor d is called"<<endl;
    }
    ~D()
    {
        cout<<"default constructor called"<<endl;
    }
    void displayD()
    {
        displayA();
        displayB();
        displayC();
        cout<<"value of d is"<<d<<endl;
    }
};
int main()
{
    D d1;
    d1.displayD();
    return 0;
}