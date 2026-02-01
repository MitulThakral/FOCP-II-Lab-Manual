#include<iostream>
using namespace std;
int factorial(int n)
{
   int fact=1;
   for(int i=1;i<=n;i++)
   {
    fact=fact*i;
   }
   return fact;
}
int ncr(int n,int r)
{
    int num=factorial(n);
    int denominator=factorial(r)*factorial(n-r);
    return num/denominator;
}
int main()
{
    int n,r;
    cout<<"enter n and r";
    cin>>n>>r;
    int ans =ncr(n,r);
    cout<<"factorial is"<<ans<<endl;
}