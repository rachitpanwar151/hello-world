#include<iostream>
using namespace std;
class shape
{
public:
    void area(int r){
    double a=3.14*r*r;
    cout<<"area of circle is"<<a;}
    void area(int l,int b)
    {
        int a=l*b;
        cout<<"area of rectangle is"<<a;
    }
};
int main()
{
    int r;
    int l,b;
    shape s1;
    cout<<"enter radius";
    cin>>r;
    s1.area(r);
    cout<<"enter l and b";
    cin>>l>>b;
    s1.area(l,b);
}
