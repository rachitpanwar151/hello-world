 #include<iostream>
 using namespace std;
 class date
 {

     int dd,mm,yy;
     public: date()//default constructor

    {
     dd=25;
     mm=5;
     yy=2021;
     }

date(int d, int m,int y)//copy cinstructor
{
    dd=d;
    mm=m;
    yy=y;
}
date(date &d1)//parameterised constructor
{
    dd=d1.dd;
    mm=d1.mm;
    yy=d1.yy;
}

void show()
{

    cout<<"date= "<<dd<<endl<<"miinth= "<<mm<<endl<<"yrar=" <<yy;
}
};
int main()
{
    date d1;
    d1.show();
    cout<<endl;
    d1.show();
    cout<<endl;
    d1.show();

}
