#include<iostream>
using namespace std;
void swap(int *p, int*p1)
{
    int temp=*p;
    *p=*p1;
    *p1=temp;
    cout<<*p<< *p1<<endl;
}
int main()
{
    int a=30,b=55;
    swap(&a,&b);
}