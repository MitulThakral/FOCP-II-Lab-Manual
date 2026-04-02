#include<iostream>
using namespace std;
bool search(int arr[],int size,int target)
{
    //base case
    if(size==0)
    {
        return false;
    }
    if(arr[0]==target)
    {
        return true;
    }
    else{
        bool remainingpart=search(arr+1,size-1,target);
        return remainingpart;
    }
}
int main()
{
    int arr[5]={3,5,1,2,6};
    int size=5;
    int key=8;
    bool ans=search(arr,size,key);
    cout<<ans;
}