#include<iostream>
using namespace std;
class A
{
    public:
    void funca()
    {
        cout<<"first class is called ";
    }
};
class B:public A{
    public:
    void funcb()
    {
        cout<<"class b is called";
    }
};
class C:public A{
    public:
    void func()
    {
        cout<<"function c is called ";
    }
};
int main()
{
    A obj1;
    obj1.funca();
    B obj2;
    obj2.funca();
    obj2.funcb();
    C obj3;
    obj3.func();
    obj3.funca();
    return 0;
}