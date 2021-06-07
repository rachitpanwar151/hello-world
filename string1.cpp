#include<iostream>
#include<string>
using namespace std;
int main(){
 int s[20]={'rachitpanwar'};
int i=0,v=0;
while(s[i]!='\0')
    {

        if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
           {
               v++;
    }
    else if( s[i]=='A'|| s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
        v++;
            }
            i++;
cout<<"vowels ="<<v;
    }
}
