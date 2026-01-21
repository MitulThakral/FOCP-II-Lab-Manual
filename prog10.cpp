#include<iostream>
using namespace std;
int main()
{
    char choice;
    cout<<"enter anything you want i will tell what it is";
    cin>>choice;
    if(choice>= '0'&&choice<='9')
    {
        cout<<"it is a number"<<endl;
    }
    else {
    switch(choice)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        cout<<"it is a vowel";
        break;
        default:
        cout<<"it is a consonant";
    }
}
return 0;
}