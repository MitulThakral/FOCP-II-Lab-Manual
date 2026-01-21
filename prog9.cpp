#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number";
    cin>>n;
        if(n%3==0&&n%5==0)
        {
        cout<<" both "<<endl;
        }
        else if(n%5==0)
        {
        cout<<" buzz "<<endl;
        }
        else if(n%3==0)
        {
            cout<<"fuzz"<<endl;
        }
    
    return 0;
}