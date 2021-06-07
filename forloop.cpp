#include<iostream>
using namespace std;
int main()
{

    int i,n,p=1;
    for(i=0;i<=10;i++)
        cout<<"for loop \n";
        for(i=0;i<=10;i++)
            cout<<i<<endl;
        for (i=1;i<10;i=i+2)
            cout<<i<<endl;
cout<<"enter number:";
cin>>n;
for(i=1;i<=10;i++)
{
    p=n*i;
    cout<<n<<"*"<<i<<"="<<p<<endl;
    }
}
