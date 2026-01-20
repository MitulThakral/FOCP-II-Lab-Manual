//largest of three
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter a,b,c"<<endl;
    cin>>a>>b>>c;
    if(a>b&&a>c)
    cout<<"largest is a"<<endl;
    else if(b>a&&b>c)
    cout<<"largest is b"<<endl;
    else
    cout<<"largest is c"<<endl;
    return 0;
}