#include<iostream>
using namespace std;
void swap(int *,int*);
int main()
{
    int a,b;
    cout<<"enter value";
    cin>>a>>b;
    cout<<"value before  swap";
    cout<<"a="<<a<<"b="<<b;
    swap (&a,&b);
}
void swap(int *p,int*q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;
    cout<<"values after swap";
    cout<<*p<<endl<<*5q;
}
