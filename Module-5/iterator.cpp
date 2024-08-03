#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string::iterator it; //iterator er syntax //er sort form holo auto .auto lickle oi class er ak ta iterator toiri hoi
    cin>>s;
    // cout<<*s.begin()<<endl;
    // cout<<*(s.end()-1)<<endl;
    // for(int i=0; i<(s.size()); i++)
    // {
    //     cout<<s[i]<<endl;
    // }
    for(it=s.begin(); it<s.end(); it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}