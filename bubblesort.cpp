#include<iostream>
using namespace std;
int main()
{

    int a[5];
    int i,j,t;
    cout<<"enter array element";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
        cout<<endl;
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            if(a[j]>a[j+1])
                {
                    t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                }
        }
    }
    cout<<"sorted array";
    for(i=0;i<=4;i++)
{
cout<<a[i];
cout<<endl;
}
}
