#include<iostream>
using namespace std;
class Animal
{
    public:
    void eat()
    {
        cout<<"animal food is ready";
    }
};
class Dog:public Animal
{
    public:
    void bark()
    {
        cout<<"dog is barking "<<endl;
    }
};
class Puppy:public Dog
{
    public:
    void weep()
    {
        cout<<"dog is weeping "<<endl;
    }
};
int main()
{
    Puppy p;
    p.bark();
    p.eat();
    p.weep();
    return 0;
}