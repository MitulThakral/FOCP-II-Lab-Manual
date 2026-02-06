#include<iostream>
using namespace std;
int main()
{
    int i;
    int ans=0;
    int arr[5];
    cout<<"enter the numbers in array";
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<5;i++)
    {
        ans=ans^arr[i];
    }
    cout<<"unique elemnt in the array "<<ans<<endl;
    return 0;
}