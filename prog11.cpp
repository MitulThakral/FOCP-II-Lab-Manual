//check is the year leap year or not
#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"enter year to check"<<endl;
    cin>>year;
    if(year%4==0&&year%100==0&&year%400==0)
    {
        cout<<"it is leap year"<<endl;
    }
    else
    cout<<"it is not a leap year"<<endl;
    return 0;
}