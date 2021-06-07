#include<iostream>
using namespace std;
class bank
{
    char name[30],actype[20];
    char gender[20] ,address[50];
    long int acno,amt,id_no,acbal=0;
    public: void create();
    void enquiry();
    void deposite();
    void  withdrawl();
};
void bank::create()
{
    cout<<"enter name ";
    cin>>name;
    cout<<endl;
    cout<<"enter actype ";
    cin>>actype;
    cout<<endl;
    cout<<"enter gender";
    cin>>gender;
    cout<<endl;
    cout<<"enter address";
    cin>>address;
    cout<<endl;
    cout<<"enter id_no";
    cin>>id_no;
    cout<<endl;
}

void bank::deposite()
{
    cout<<"enter ac no";
    cin>>acno;
    cout<<"enter amount to deposite";
    cin>>amt;
    acbal=acbal+amt;
}
void bank::withdrawl()
{
    cout<<"enter amount to withdrawl";
    cin>>amt;
    acbal=acbal-amt;
}
void bank::enquiry()
{
    cout<<name<<endl<<actype<<endl<<gender<<endl<<address<<endl<<id_no<<endl<<acbal;
}
int main()
{
    bank b2;
    b2.create();
    b2.deposite();
      b2.enquiry();
    b2.withdrawl();
      b2.enquiry();
}
