//to check whether the number is amstrong  or not
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,r,original,sum=0;
    cout<<"enter number";
    cin>>n;
    original=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(original==sum)
    {
        cout<<"it is a amstrong number"<<endl;;
    }
    else{
        cout<<"it is not a amstrong number"<<endl;
    }
    return 0;
}