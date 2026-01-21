//to apply discount on order above 1000 items
#include<iostream>
using namespace std;
int main()
{
    int item,price;
    float discount,totalamount,finalamount;
    cout<<"enter items that you have got the order"<<endl;
    cin>>item>>price;
    if(item>=1000)
    {
        totalamount=item*price;
        discount=0.10*totalamount;
        finalamount=totalamount-discount;
        cout<<"your bill is "<<finalamount<<endl;
    }
    else{
        totalamount=item*price;
        cout<<"no discount for you "<<totalamount<<endl;
    }
    return 0;
}