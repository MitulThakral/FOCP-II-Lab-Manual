#include<iostream>
using namespace std;
int main()
{
    int a;
    float b;
    char c;
    string name;
    cout<<"enter name and values  "<<endl;
    // cin>>a>>b>>c>>name;
    // cout<<a<<endl<<b<<endl<<c<<endl<<name<<endl;
    getline(cin,name);
    cout<<name;
    return 0;
}