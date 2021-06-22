#include<iostream>
using namespace std;
void prime(int);
int main()
{
    int a;
    cout<<"enter a";
    cin>>a;
    prime(a);
}
void prime(int b)
{
    int j,count=0;
    for(j=1;j<=b;j++)
    {
        if(b%j==0)
            count++;
    }

    if(count==2)
        {cout<<"prime no";}
    else
       {
        cout<<"composite no ";}

}
