#include<iostream>
using namespace std;
int main()
{
    int totalsalary=0,i;
    float averagesalary,arr[10];
    cout<<"enter the salary of employee";
    for(i=0;i<10;i++)
    {
        cin>>arr[i];
        totalsalary+=arr[i];
    }
    averagesalary=totalsalary/10;
    cout<<"total salary is "<<totalsalary<<endl;
    cout<<"average salary is "<<averagesalary<<endl;
    return 0;
}