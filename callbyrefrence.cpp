#include<iostream>
using namespace std;
void swap(int &, int &);
int main()
{
    int a,b;
    cout<<"enter a and b";
    cin>>a>>b;
    cout<<"values before swap";
    cout<<"a="<<a<<endl<<"b="<<b<<endl;
    swap(a,b);

}
void swap(int &a,int &b)
{
    int t;
    t=a;
    a=b;
    b=t;
cout<<"value after swap"<<"a="<<a<<endl<<"b="<<b;
}

