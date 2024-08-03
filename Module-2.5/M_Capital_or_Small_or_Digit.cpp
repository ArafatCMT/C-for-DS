#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    if(ch>='A' && ch<='Z')
    {
        cout<<"ALPHA"<<endl<<"IS CAPITAL";
    }
    else if(ch>='a' && ch<='z')
    {
        cout<<"ALPHA"<<endl<<"IS SMALL";
    }
    else if(ch>='0' && ch<='9')
    {
        cout<<"IS DIGIT";
    }
    return 0;
}