#include<iostream>
using namespace std;
struct student
{
    int t,avg=0;
    char name[20];
    int m1,m2,m3;
    };
int main()
{
   struct student e[4];
    int i;
    for(i=0;i<=3;i++)
    {
        cout<<"enter your name";
        cin>>e[i].name;
        cout<<"enter marks";
        cin>>e[i].m1>>e[i].m2>>e[i].m3;
    }
    for(i=0;i<=3;i++)
        {
        e[i].t=e[i].m1+e[i].m2+e[i].m3;
        e[i].avg=e[i].t/3;
        cout<<e[i].name<<endl<<e[i].t<<endl<<e[i].avg<<endl;
    }
    }


