
//taking nothing return nothing program


#include<iostream>
using namespace std;
void sum();  //function decleration
int main()
{
    sum();   //function calling

}
void sum()    //fubction defination
{
    int a,b,c;
    cout<<"enter a and b:";
    cin>>a>>b;
    c=a+b;
    cout<<"sum is :"<<c;

}
