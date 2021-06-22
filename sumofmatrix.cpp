#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    int a[3][3],b[3][3],c[3][3];
    cout<<"emter 1st string ";
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
        cin>>a[i][j];
        cout<<endl;
    cout<<"enter 2nd string";
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
    cin>>b[i][j];
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
    {
        c[i][j]=0;
        for(k=0;k<=2;k++)
        {
            c[i][j]=c[i][j]+a[i][k]+b[j][k];
        }
        cout<<c[i][j]<<endl;
    }
}
