#include<iostream>
using namespace std;
void digit(int n,string arr[])
{
    if(n==0)
    {
        return;
    }
    //processing
    int d=n%10;
    n=n/10;
    digit(n,arr);
    cout<<arr[d]<<" ";
}
int main()
{
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cout<<"enter n";
    cin>>n;
    cout<<endl<<endl<<endl;
    digit(n, arr);
    cout<<endl<<endl<<endl;
    return 0;
}