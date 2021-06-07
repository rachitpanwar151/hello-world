#include<iostream>
using namespace std;
int main()
{

    char name[20],job[20];
    double da,hra,gross;
    int bsal;
    cout<<"enter name and job";
    cin>>name>>job;
    cout<<"enter bsal";
    cin>>bsal;
    da=.25*bsal;
    hra=.12*bsal;
    gross=bsal+da+hra;
    cout<<name<<job<<bsal<<da<<hra<<gross;
}
