//make a calculator
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int choice;
    float a,b;
    cout<<"entter choice"<<endl;
    cout<<"sum"<<endl;
    cout<<"subtract"<<endl;
    cout<<"multiply"<<endl;
    cout<<"divide";
    cin>>choice;
    if(choice>=1&&choice<=4)
    {
        cout<<"enter two numbers";
        cin>>a>>b;
    }
    switch(choice)
    {
        case 1:
        cout<<"result of sum is "<<a+b<<endl;
        break;
        case 2:
        cout<<"result of subtraction is "<<a-b<<endl;
        break;
        case 3:
        cout<<"result of multipliaction is "<<a*b<<endl;
        break;
        case 4:
        if(b!=0)
        
            cout<<"result of division is "<<a/b<<endl;
            else
            cout<<"eror"<<endl;
            break;
            case 5:
            cout<<"exiting program"<<endl;
            break;
            default:
            cout<<" invalid choice try again"<<endl;
    }
    return 0;
}