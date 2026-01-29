#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int a[3][3],b[3][3],sum[3][3];
    cout<<"enter values for 1st matrix";
    for(i=0;i<3;i++)
    {
            for(j=0;j<3;j++)
            {
            cin>>a[i][j];
            }
    }
        cout<<"enter values for 2nd matrix";
        for(i=0;i<3;i++)
{
        for(j=0;j<3;j++)
        {
        cin>>b[i][j];
        }
}
    for(i=0;i<3;i++)
{
        for(j=0;j<3;j++)
{
    sum[i][j]=a[i][j]+b[i][j];
    cout<<sum[i][j] <<" ";
}
cout<<endl;
}
return 0;
}