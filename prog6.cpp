//conversion of temp
#include<iostream>
using namespace std;
int main()
{
    float f,c,conversion;
    int choice;
    cout<<"enter your choice"<<endl;
    cin>>choice;
    if(choice==1)
    {
        cout<<"enter temp in fahrenheit"<<endl;
        cin>>f;
        conversion=(f-32)*(5/9);
        cout<<"converted temp "<<conversion<<endl;
    }
    else if(choice==2)
    {
        cout<<"enter temp in fahrenheit"<<endl;
        cin>>c;
        conversion=(c * (9 / 5)) + 32;
        cout<<"converted temp "<<conversion<<endl;
    }
    return 0;
}