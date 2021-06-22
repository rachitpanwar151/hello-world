#include<iostream>
using namespace std;
class student{
char name[20];
int m1,m2,m3,t,avg=0;
public:
    void getdata()
    {
        cout<<"enter name";
        cin>>name;
        cout<<"enter 3 subject sumber";
        cin>>m1>>m2>>m3;
    }
    void calc()
    {
        t=0;
        t=m1+m2+m3;
        avg=t/3;
    }
    void display()
    {
        cout<<"name="<<name<<endl<<"total="<<t<<endl<<"average="<<avg<<endl;
    }
};
int main()
{
    student s1;
    s1.getdata();
    s1.calc();
    s1.display();
}
