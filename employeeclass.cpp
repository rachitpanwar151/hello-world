#include<iostream>
using namespace std;
class employee
{
    char name[20],job[20];
    float bsal,da,hra,gross;
    public: void getdata();
    void calc();
    void display();

};
void employee::getdata()
 {
     cout<<"enter name";
    cin>>name;
    cout<<endl;
    cout<<"enter job";
         cin>>job;
         cout<<endl;
   cout<<"enter bsal";
        cin>>bsal;
    }
    void employee:: calc()
    {
        da=.25*bsal;
        hra=.15*bsal;
        gross=bsal+da+hra;
    }
    void employee:: display()
    {
        cout<<"name="<<name<<endl<<"job="<<job<<endl<<"bsal="<<bsal<<endl<<"da="<<da<<endl<<"hra="<<hra<<endl<<"gross="<<gross<<endl;
    }


int main()
{
    employee e1;
    e1.getdata();
    cout<<endl;
    e1.calc();
    cout<<endl;
    e1.display();
}
