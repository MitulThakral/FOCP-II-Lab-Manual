#include<iostream>
#include<string>
using namespace std;
void welcome()
{
    cout<<" welcome agent"<<endl;
}
void welcome(string name)
{
    cout<<" welcome "<<name<<endl;
}
int main()
{
    string name;
    cout<<"enter  name";
    getline(cin,name);
    welcome();
    welcome(name);

}