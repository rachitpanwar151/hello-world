#include<iostream>
using namespace std;
int main()
{
    int a[5];
    int i,s;
    cout<<"enter array element";
    for(i=0;i<=4;i++)
        cin>>a[i];
    for(i=0;i<=4;i++)
    {
        if(a[i]<s)
        {

            s=a[i];
        }
    }
    cout<<"smallest  elemenr is "<<s;
}
