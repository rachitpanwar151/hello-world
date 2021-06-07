#include<iostream>
using namespace std;
class calculate
{
 public: void add(int a, int b)
 {
 int s=(a+b);
 cout<<endl<<s;
}
void add(float a, float b)
{
   float s=(a+b);
   cout<<endl<<s;
}
void add(double a,double b)
{
    double s=(a+b);
    cout<<endl<<s;
}
};
int main()
{
    calculate c;
    int a,b;
    float n,d;
    double e,f;
    cout<<"enter 2 interger";
    cin>>a>>b;
    c.add(a,b);
    cout<<"enter 2 float";
    cin>>n>>d;
    c.add(n,d);
    cout<<"enter 2 double";
    cin>>e>>f;
    c.add(e,f);
}
