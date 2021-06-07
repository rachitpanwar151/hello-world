#include<iostream>
using namespace std;
int main()
{

    int m1,m2,m3,t,avg;
    char name[20];
    cout<<"enter marks:";
    cin>>m1>>m2>>m3;
    cout<<"enter name;";
    cin>>name;
    t=m1+m2+m3;
    avg=t/3;
    cout<<"total is"<<t;
    cout<<"average is;"<<avg;
}
