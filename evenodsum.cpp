#include<iostream>
using namespace std;
int main()
{

    int i=1,e=0,o=0,s,n;
do{
            cout<<"enter any no:";
    cin>>n;
   if(n%2==0)
        e=e+n;
    else
        o=o+n;
    i++;
    }while(i<=10);
    cout<<"e="<<e;
    cout<<"o="<<o;

}
