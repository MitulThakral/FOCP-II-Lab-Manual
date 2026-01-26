//compute total and percentage of marks of students
#include<iostream>
using namespace std;
int main(){
    int marks[5],total=0,i;
    float percentage;
    cout<<"enter marks";
    for(i=0;i<5;i++)
    {
        cin>>marks[i];
    total+=marks[i];
    }
    percentage=(total/500.0)*100;
    cout<<"total marks "<<total <<endl;
    cout<<"percentage is "<<percentage<<"%"<<endl;
    return 0;
}