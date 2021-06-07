#include<iostream>
using namespace std;
int main(){
int i,a1[5],b1[5];
for(i=1;i<=5;i++)
    cin>>a1[i];
for(i=1;i<=5;i++)
    b1[i]=a1[i];
cout<<"coppied array is:";
for(i=1;i<=5;i++)
{
    cout<<"b1[i]"<<b1[i]<<endl;
}
return 0;
}
