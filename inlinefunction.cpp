#include<iostream>
using namespace std;
/*if the function body is of one line inline function will work and if 
the body is of 2-3 line compiler ki marzi hai and if it is greater than 3 lines it will not run
no extra memory usage */
inline int getmax(int& a,int& b)
{
    return (a>b) ? a :b;
}
int main()
{
    int a,b;
    int ans=0;
    cout<<"enter a and b";
    cin>>a>>b;
    ans=getmax(a,b);
    cout<<ans<<endl;
    a=a+3;
    b=b+1;
    ans=getmax(a,b);
    cout<<ans<<endl;
    return 0;
}