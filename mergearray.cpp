#include<iostream>
using namespace std;
int main()
{
    int i = 0;
    int j = 0;
    int k = 0;
    int a[6]={-1,0,15,16,19,21};
    int b[6]={-3,5,15,19,300,400};
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);
    int arr[n + m]={0};
    while(i<n&&j<m)
    {
        if(a[i] < b[j])
        {
            arr[k] = a[i];
            i++;
            k++;
        }
        else 
        {
           arr[k]=b[j];
           j++;
           k++;
        }
    }
    while(i<n)
        {
            arr[k]=a[i];
            i++;
            k++;
        }
        while(j<m)
        {
            arr[k]=b[j];
            j++;
            k++;
        }
        for(i=0;i< n + m;i++)
        {
            cout<<arr[i]<<" ";
        }
        return 0;
}