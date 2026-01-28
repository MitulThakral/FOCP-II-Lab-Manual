#include<iostream>
using namespace std;
int main()
{
    int arr[5],i;
    int count=0;
    cout<<"enter numbers";
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
        if(arr[i]%3==0&&arr[i]%5==0){
            count++;
        }
    }
    cout<<"number is "<<count<<endl;
    return 0;
}