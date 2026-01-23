//check which number is largest
#include<iostream>
using namespace std;
int main()
{
    int no,largest,num,i;
    cout<<"enter how many number ";
    cin>>no;
    cout<<"enter number";
    cin>>largest;
    for(i=2;i<=no;i++)
    {
        cout<<"enter number"<<i;
        cin>>num;
        if(num>largest)
        largest=num;
    }
    cout<<"largest number is "<<largest<<endl;
}