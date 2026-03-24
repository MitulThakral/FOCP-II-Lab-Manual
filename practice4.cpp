#include<iostream>
using namespace std;
class Employee
{
int empId;
string name;
double monthlySalary;
public:
Employee(int id,string n,double salary);
double calculateAnnualSalary();
void displayDetails();
};
Employee::Employee(int id,string n,double salary)
{
    empId=id;
    name=n;
    monthlySalary=salary;
}
double Employee::calculateAnnualSalary()
{
    return monthlySalary*12;
}
void Employee::displayDetails()
{
    cout<<"\n employee id "<<empId<<endl;
    cout<<"\n name "<<name<<endl;
    cout<<"annual salary "<<calculateAnnualSalary()<<endl;
}
int main()
{
    int emid;
    string n;
    double mosalary;
    cout<<"enter emid,name,monthlysalary";
    cin>>emid>>n>>mosalary;
    Employee e(emid,n,mosalary);
    e.displayDetails();
    return 0;
}