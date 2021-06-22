#include<iostream>
#include<string>
using namespace std;
void copy(char[],char[]);
int main()
{
    char s[20],s2[20];
    cout<<"enter  string:";
    cin>>s;
    copy(s,s2);
    cout<<"copied string"<<s2;

}
void copy(char s[], char s2[])
{
    int i;
    while(s[i]!='\0')
    {
        s2[i]=s[i];
        i++;
    }
}
