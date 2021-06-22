#include<iostream>
using namespace std;
void sum(int,int);//function decleration with parameter
int main()
{

    int a,b;
    cout<<"enter a and b:";
    cin>>a>>b;
    sum (a,b);//function caling with actual parameter
    return 0;
}
void sum(int c,int d)//function decleration with formal parameter
{
    int sum=0;
    sum=c+d;
    cout<<"sum is ;"<<sum;
}
