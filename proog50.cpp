#include<iostream>
using namespace std;
int main()
{
    int i,j,temp;
    int arr[5]={2,6,4,8,9};
    for(i=0;i<5/2;i++)
    {
        for(j=4-i;j>=4-i;j--)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    cout<<"revrese of an array is"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    return 0;
}