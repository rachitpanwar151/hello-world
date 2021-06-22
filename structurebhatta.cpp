#include<iostream>
using namespace std;
typedef struct bahtta
{
    char name[20],job[20];
    int bsal;
}bhatta ;
int main()
{
    bhatta b;
    double bsal,da,hra,gross;
    cout<<"enter employyee  :";
    cin>>b.name;
    cout<<"enter job        :";
    cin>>b.job;
    cout<<"enter your basic salary: ";
    cin>>b.bsal;
    da=.25*b.bsal;
    hra=.15*b.bsal;
    gross=da+hra+b.bsal;
    cout<<"your name is :"<<b.name<<endl<<"you designation is :"<<b.job<<endl<<"you got the da :"<<da<<endl<<"you got hra  :"<<hra<<endl<<"your gross is  :"<<gross<<endl;
}
