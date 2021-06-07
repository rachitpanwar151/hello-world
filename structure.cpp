#include<iostream>
using namespace std;
typedef struct student
{
    int m1,m2,m3;
    char name[20];
}student;
int main()
{
    int t=0,avg;
     student s1;
     cout<<"enter name";
     cin>>s1.name;
     cout<<"enter marks in 3 subject";
     cin>>s1.m1;
     cin>>s1.m2;
     cin>>s1.m3;
     t=s1.m1+s1.m2+s1.m3;
     avg=t/3;
     cout<<"total "<<t<<endl<<"average"<<avg<<endl;
}
