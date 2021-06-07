#include<iostream>
#define pi 3.14
using namespace std;

int main()
{
  double ar,cir,r;
  cout<<"enter radius";
  cin>>r;
  ar=(pi*r*r);
  cir=(2*pi*r);
  cout<<"area is:"<<ar;
  cout<<"circumference is :"<<cir;
}
