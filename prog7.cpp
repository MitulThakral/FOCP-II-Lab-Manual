//total bill after discount
#include<iostream>
using namespace std;
int main()
{
    int quantity,price,discount,totalamount,finalamount;
    cout<<"enter quantity and price"<<endl;
    cin>>quantity>>price;
    totalamount=quantity*price;
    discount=0.20*totalamount;
    finalamount=totalamount-discount;
    cout<<finalamount<<endl;
    return 0;
}