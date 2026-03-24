#include<iostream>//see formulas of tem
using namespace std;
class Student
{
    int rollNo;
	string name;
	int marks1;
	int marks2;
	int marks3;
    public:
    Student();
    Student(int r,string n,int m1,int m2, int m3);
    int calculatetotal();
    void displaydetails();
};
Student::Student(int r,string n,int m1,int m2, int m3)
{
    rollNo=r;
    name=n;
    marks1=m1;
    marks2=m2;
    marks3=m3;
}
int Student::calculatetotal()
{
    return marks1+marks2+marks3;
}
void Student::displaydetails()
{
    cout<<" roll no is "<<rollNo<<endl;
    cout<<" name  is "<<name<<endl;
    cout<<" marks1 is "<<marks1<<endl;
    cout<<" marks 2 "<< marks2<<endl;
    cout<<" marks 3 "<<marks3<<endl;
    cout<<" total is "<<calculatetotal()<<endl;
}
int main()
{
    int rollno,m1,m2,m3;
    string name;
    cout<<"enter the roll no";
    cin>>rollno;
    cout<<"enter name";
    cin>>name;
    cout<<"enter m1,m2,m3";
    cin>>m1>>m2>>m3;
    Student s(rollno,name,m1,m2,m3);
    s.displaydetails();
    return 0;
}