#include<iostream>
using namespace std;
int main()
{
    int a[5][5];
int i,j,avg;
int s=0;
cout<<"enter matrix element";
for(i=0;i<5;i++)
for(j=0;j<5;j++)
   {
        cin>>a[i][j];
        cout<<endl;
   }

   cout<<"matrix element";
   for(i=0;i<5;i++)
for(j=0;j<5;j++)
   {
cout<<a[i][j]<<endl;
}

    cout<<"sum of matrix element element";
for(i=0;i<5;i++)
for(j=0;j<5;j++)
    {s=s+a[i][j];
    cout<<endl;
    avg=s/a[i][j];
  }

  cout<<"sum is"<<s;
  cout<<endl;
  cout<<"average is "<<avg<<endl;
}

