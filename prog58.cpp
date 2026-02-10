#include<iostream>
using namespace std;
void welcome(string="munna",string="");
int main()
{
    welcome();
    welcome("richa");
    welcome("richa","singh");
    return 0;
}
void welcome(string fname,string lname)
{
    cout<<"welcome"<<fname<<lname;
}