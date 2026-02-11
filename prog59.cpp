#include<iostream>
using namespace std;
int main()
{
    int i,temp,j;
    int arr[5]; 
    cout<<"enter the numbers";
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"after sorting the array is ";
    for(i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}