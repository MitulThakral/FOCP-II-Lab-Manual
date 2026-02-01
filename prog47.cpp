#include<iostream>
using namespace std;
int ap(int n)
{
    int ans;
    ans=(3*n+7);
    return ans;
}
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    int result=ap(n);
    cout<<"ap of nmuber is"<<result<<endl;
}