// #include<iostream>
// using namespace std;
// class Object
// {
//     int a1;
//     int a2;
//     public:
//     Object()
//     {
//         a1=0;
//         a2=0;
//     }
//     Object(int a1,int a2)
//     {
//         this->a1=a1;
//         this->a2=a2;
//     }
//     void display()
//     {
//         cout<<"a1 and  "<<a1<<"a2 is "<<a2<<endl;
//     }
// };
// int main()
// {
//     Object ab,ac(23,67);
//     ab.display();
//     ac.display();
//     return 0;

// }
#include<iostream>
using namespace std;
class Person
{
    string name;
    int age;
    public:
    Person()
    {
        name="default";
        age=18;
    }
    Person(string nm,int ag)
    {
        name=nm;
        age=ag;
    }
    void display()
    {
        cout<<"\n name is"<<name<<"\n age is"<<age;
    }
};
class Student:public Person
{
    string rollno;
    public:
    Student()
    {
        rollno="25csu147";
    }
    Student(string nm,int ag,string rno):Person(nm,ag)
    {
        rollno=rno;
    }
    void displaystudent()
    {
        display();
        cout<<"\n roll no is "<<rollno;
    }
};
int main()
{
    Student p1,p2("rahul",23,"25csu147");
    p1.display();
    p1.displaystudent();
    p2.displaystudent();
    return 0;
}