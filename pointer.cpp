#include<iostream>
using namespace std;
int main()
{
    int num=5;
    int *p=&num;
    cout<<"answer is  "<<*p<<endl;
    cout<<"answer is "<<p<<endl;
    //copying a pointer
    int *q=p;
    cout<<p<<q<<endl;
    cout<<*p<<*q<<endl;
    return 0;
}