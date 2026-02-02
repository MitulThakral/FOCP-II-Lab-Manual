#include<iostream>
using namespace std;
int main()
{
    int i,arr[5];
    cout<<"enter the numbers";
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<5;i+=2)
    {
        if(i+1<5)
        {
            swap(arr[i],arr[i+1]);
        }
    }
    cout<<"after swap"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    return 0;
}