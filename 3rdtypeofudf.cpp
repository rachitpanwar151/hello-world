
//taking something return nothing

#include<iostream>
using namespace std;
int greatest(int,int,int);//function decleration with argument
int main()
{
    int a,b,c,g=0;;
    cout<<"enter 3 no:";
    cin>>a>>b>>c;
    g=greatest(a,b,c);//function calling with actual parameter
cout<<"greatest id "<<g;
return 0;
}
int greatest(int d,int e,int f)//function defination with formal parameter
{

    int g=0;
    if(d>e&&d>f)
        g=d;
    else if(e>d&&e>f)
        g=e;
        else
            g=f;
        return g;
}
