#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i;
    string s;
    bool special=false;
    cout<<"enter username";
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        char ch=s[i];
        if(!((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')||(ch>='0'&&ch<='9')))
        {
            special=true;
            break;
        }
    }
    if(special)
    {
        cout<<"username contains special character"<<endl;
    }
    else
    cout<<"username do not contain special character"<<endl;
    return 0;
}