#include<iostream>
using namespace std;
int sum(int arr[],int size)
{
    //base case
    if(size==0)
    {
        return 0;
    }
    if(size==1)
    {
        return arr[0];
    }
    int remainingpart=sum(arr+1,size-1);
    int final=arr[0]+remainingpart;
    return final;
}
int main()
{
    int arr[5]={5,4,8,6,10};
    int size=5;
    int ans=sum(arr,size);
    cout<<"sum is "<<ans<<endl;
    return 0;
}