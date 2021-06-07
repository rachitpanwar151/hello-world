#include<iostream>
using namespace std;
int main()
{

    int i=1,f,n;
    while(i<=10){
        cout<<i<<endl;
        i++;
    }
 cout<<"enter no";
 cin>>n;
 while(i<=n)
 {
     f=f*i;
     i++;
 }
 cout<<"fact of"<<n <<"is"<<f;
}
