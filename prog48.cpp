#include<iostream>
using namespace std;
int main()
{
    int i;
    int max;
    int arr[5];
    cout<<"enter the number in the array";
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    max=arr[0];
    for(i=1;i<5;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    int min=arr[0];
    for(i=1;i<5;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    cout<<"min and max number in array is "<<min<<" "<<max<<endl;
    return 0;
}