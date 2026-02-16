#include<iostream>
using namespace std;
float average(int arr[],int n)
{
    int i,sum=0;
    float avg;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    avg=(float)sum/n;
    return avg;
}
int minimum(int arr[],int n)
{
int i;
int min=arr[0];
for(i=1;i<n;i++)
{
    if(min>arr[i])
    {
        min=arr[i];
    }
}
return min;
}
int maximum(int arr[],int n)
{
    int i;
    int max=arr[0];
    for(i=1;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[10],i;
    cout<<"enter the marks";
    for(i=0;i<10;i++)
    {
        cin>>arr[i];
    }
  float result= average(arr,10);
  cout<<"result of average is"<<result<<endl;
  cout<<"minimum of the array "<<minimum(arr,10)<<endl;
  cout<<"maximum of the array "<<maximum(arr,10)<<endl;
  return 0;
}