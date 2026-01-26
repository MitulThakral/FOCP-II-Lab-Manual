//to check the number  it is amstrong or not
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,r,original,reverse=0;
    cout<<"enter number";
    cin>>n;
    original=n;
    while(n>0)
    {
        r=n%10;
        reverse=reverse*10+r;   
        n=n/10;
    }
    if(original==reverse)
    {
        cout<<"it is a palindrome number"<<endl;;
    }
    else
    {
        cout<<"it is not a palindrome number"<<endl;;
    }
    return 0;
}