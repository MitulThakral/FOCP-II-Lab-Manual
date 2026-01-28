#include<iostream>
using namespace std;
int main()
{
    float temp[30];
    int i;
    float min;
    cout<<"enter the minimum temp";
    for(i=0;i<30;i++)
    {
        cin>>temp[i];
    }
    min=temp[0];
    for(i=1;i<30;i++)
    {
        if(temp[i]<min)
        {
            min=temp[i];
        }
    }
    cout<<"minimum temp in 30 days is "<<min<<endl;
    return 0;
}