#include<iostream>
using namespace std;
void computeperformance(int arr[],int n,int min, int max, int avg)
{
    min=arr[0];
    max=arr[0];
   int sum=0;
   for(int i=0;i<n;i++)
   {
    if(min>arr[i])
    {
        min=arr[i];
    }
   }
   for(int i=0;i<n;i++)
   {
    if(max<arr[i])
    {
        max=arr[i];
    }
   }
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/n;
    cout<<"average is"<<(float)sum/n<<endl;
    cout<<"minimum value is "<<min<<endl;
    cout<<"maximum value is "<<max<<endl;
}
int main()
{
    int arr[10];
    int m1,m2,a;
    cout<<"enter the values of array";
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    computeperformance(arr,10,m1,m2,a);
}