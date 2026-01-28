#include<iostream>
using namespace std;
int main()
{
    int i,arr[5];
    int even=0,odd=0;
    cout<<"enter numbers";
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            even+=arr[i];
        }
        else
        odd+=arr[i];
    }
    cout<<"sum of all even numbers is "<<even<<endl;
    cout<<"sum of all odd numbers is "<<odd<<endl;
    return 0;
}