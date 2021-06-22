#include<iostream>
using namespace std;
int main()
{
int a[5];
int n,m,l,f,i,flag=0;
for(i=0;i<=4;i++)
{
    cin>>a[i];
}
cout<<"enter element to search";
cin>>n;
f=0;
l=4;
while(f<=l)
{
    m=f+l/2;
    if(a[m]==n)
    {
        flag=1;
        cout<<"item found:"<<a[m];
        break;}
        else if(a[m]>n)
        {
            l=m-1;

        }
        else
        {
            f=m+1;
        }
                        cout<<"item not found";
}
}


