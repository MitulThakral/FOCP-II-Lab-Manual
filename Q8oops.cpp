#include<iostream>
using namespace std;
class Employee
{
    protected:
    string name;
    int salary;
    public:
    Employee(string name,int salary)
    {
        this->name=name;
        this->salary=salary;
    }
};
class Developer:public Employee
{
    public:
    Developer(string name,int salary):Employee(name,salary){}
    void displayrole()
    {
        cout<<"name of the developer is "<<name<<endl;
        cout<<"salary of the developer is "<<salary<<endl;
    }
};
class Designer:public Employee
{
    public:
    Designer(string name,int salary):Employee(name,salary){}
    void displayrole()
    {
        cout<<"name of the designer is "<<name<<endl;
        cout<<"salary of thedesigner is "<<salary<<endl;
    }                                                               
};
int main()
{
    Designer d1("rahul",50000);
    Developer d2("mohit",40000);
    d1.displayrole();
    d2.displayrole();
    return 0;
}