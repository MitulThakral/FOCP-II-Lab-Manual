#include<iostream>
using namespace std;
class Student
{
    string name;
    int rollno;
    int mark1;
    int mark2;
    int mark3;
    public:
void inputdetails()
{
    cout<<"enter the name ,rollno,mark1,mark2,mark3";
    cin>>name>>rollno>>mark1>>mark2>>mark3;
}
int calculatedetail()
{
    return mark1+mark2+mark3;
}
void displaydetail()
{
    cout<<"name is "<<name<<endl;
    cout<<"roll no is "<<rollno<<endl;
    cout<<"mark1 is "<<mark1<<endl;
    cout<<"mark2 is "<<mark2<<endl;
    cout<<"mark3 is "<<mark3<<endl;
    cout<<"total is "<<calculatedetail();
}
};
int main()
{
    Student s1;
    Student s2;
    s1.inputdetails();
    s1.displaydetail();
    s2.inputdetails();
    s2.displaydetail();
}