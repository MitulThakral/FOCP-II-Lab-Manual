#include<iostream>
using namespace std;
void reachome(int src,int dest)
{
    cout<<"source "<< src <<"destination "<< dest <<endl;
    //base case
    if(src==dest)
    {
        cout<<"reached "<<endl;
        return;
    }
    //processing
    src++;
    //recursive call
    reachome( src, dest);
}
int main()
{
    int dest=10;
    int src=1;
    reachome(src,dest);
    return 0;
}