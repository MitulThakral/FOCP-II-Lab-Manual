#include<iostream>
using namespace std;
int main()
{
    int i,j,arr[5];
    int largest,secondlargest;
    cout<<"enter numbers";
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    largest=arr[0];
    secondlargest=arr[0];
    for(i=1;i<5;i++)
    {
        if(largest<arr[i])
        {
            secondlargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondlargest&&arr[i]!=largest)
        {
            secondlargest=arr[i];
        }
    }
    cout<<"largest of all numbers is "<<largest<<endl;
    cout<<"second largest of all number is "<<secondlargest<<endl;
    return 0;
}