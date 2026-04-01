#include<iostream>
using namespace std;
bool binarysearch(int arr[],int size,int s,int e,int key)
{
    if(s>e)
    {
        return false;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==key)
    {
        return true;
    }
    if(arr[mid]<key)
    {
     return binarysearch(arr,size,mid+1,e,key);
    }
    else 
    {
        return binarysearch(arr,size,s,mid-1,key);
    }
}
int main(){
    int arr[5]={2,4,6,8,10};
    int size=5;
    int key=8;
    bool ans=binarysearch(arr,size,0,4,key);
    cout<<ans;
}