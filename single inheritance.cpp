#include<iostream>
using namespace std;
class date
{
int dd,mm,yy;
public: void getdate()
{
    cout<<"enter date";
    cin>>dd>>mm>>yy;
    }
    void showdate()
    {
        cout<<dd<<mm<<yy;
    }
};
class student:public date
{
    char name[20];
    int m1,m2,m3,t,avg;
    public:student()
    {
        t=0;
        avg=0;
    }
    void getstud()
    {
        cout<<"enter name";
        cin>>name;
        cout<<"enter dob";
        date::getdate();
        cout<<"enter marks in 3 subject:";
        cin>>m1>>m2>>m3;
        }
        void calc()
        {
            t=m1+m2+m3;
        avg=t/3;
            }
            void show()
            {
                cout<<name<<endl<<t<<endl<<avg<<endl;

            }
};
int main()
{
    student s1;
    s1.getstud();
    s1.calc();
    s1.show();
}
