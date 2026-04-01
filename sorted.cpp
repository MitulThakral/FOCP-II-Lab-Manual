#include<iostream>
using namespace std;
bool sorted(int arr[],int size)
{
    //base case
    if(size==0||size==1)
    {
        return true;
    }
    if(arr[0]>arr[1])
    {
        return false;
    }
    else{
        bool remainingpart=sorted(arr+1,size-1);
        return remainingpart;
    }
}
int main()
{
    int arr[5]={2,4,17,8,9};
    int size=5;
    bool ans=sorted(arr,size);
    cout<<ans<<endl;
    return 0;
}