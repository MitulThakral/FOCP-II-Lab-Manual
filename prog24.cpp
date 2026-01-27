#include<iostream>
using namespace std;
int main()
{
    int price[10];
    int max=0;
    int i;
    cout<<"enter the price of 10 items";
    for(i=0;i<10;i++)
    {
        cin>>price[i];
    }
    max=price[0];
    for(i=1;i<10;i++)
    {
        if(max<price[i])
        max=price[i];
    }
    cout<<"maximum price is "<<max<<endl;
    return 0;
}