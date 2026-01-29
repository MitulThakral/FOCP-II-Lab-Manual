#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int arr[3][5];
    cout<<"enter students and marks of 5 subject"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"marks in 2nd subject of 1st student "<<arr[0][1]<<endl;
    cout<<"marks in 5th subject of 3rd student "<<arr[2][4]<<endl;
    return 0;
}