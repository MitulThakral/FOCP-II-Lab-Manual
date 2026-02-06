#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        if(key>arr[mid])
        {
            start=mid+1;
        }
        else
        {
        end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main()
{
    int even[6]={2,4,6,8,23,45};
    int odd[5]={2,6,10,32,48};
    int evenindex=binarysearch(even,6,23);
    int oddindex=binarysearch(odd,5,32);
    cout<<" even index is "<<evenindex<<endl;
    cout<<"odd index is "<<oddindex<<endl;
    return 0;
}