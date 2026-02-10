#include<iostream>
using namespace std;
int result(int a, int b, int c=0, int d=0,int e=0)
{
    return a+b+c+d+e;
}
int main(){
    cout<<"sum of  5 subject "<<result(47,69,84,56,75)<<endl;
  cout<<"sum of  4 subject "<<result(78,49,65,77)<<endl;
      cout<<"sum of  2 subject "<<result(45,58)<<endl;
    cout<<"sum of  3 subject "<<result(57,68,95)<<endl;
return 0;   

}