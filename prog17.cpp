//to check wether the number is prime or not
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter the number";
    cin>>n;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        cout<<"it is aprime number"<<endl;
        else
        cout<<"it is not a prime number"<<endl;
    }
    return 0;

}