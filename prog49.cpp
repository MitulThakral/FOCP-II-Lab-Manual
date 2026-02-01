#include<iostream>
using namespace std;
int main()
{
    int i;
    int arr[5];
    int sum=0;
    cout<<"enter the number inn array";
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"sum of all the terms is "<<sum<<endl;
    return 0;
    
}