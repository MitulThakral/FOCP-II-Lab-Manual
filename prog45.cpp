#include<iostream>
using namespace std;
int main()
{
    int i,n,a,b;
    cout<<"enter n,a,b";
    cin>>n>>a>>b;
    cout<<a<<" "<<b<<" ";
    for(i=1;i<=n;i++)
    {
        int nextnum=a+b;
        cout<<nextnum<<" ";
        a=b;
        b=nextnum;
    }
    cout<<endl;
}