#include<iostream>
using namespace std;
int main()
{
    int n,i;
    int singer;
    int arr[1000]={0};
    cout<<"enter n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"enter singer number";
        cin>>singer;
        arr[singer]++;
    }
    int maxi=0;
    for(i=0;i<999;i++)
    {
        if(maxi<arr[i])
        {
            maxi=arr[i];
        }
    }
}