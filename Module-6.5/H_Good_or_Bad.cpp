#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while (test--)
    {
        string s;
        cin>>s;
        int flag = 0;
        for(int i=0; i<s.size(); i++)
        {
            if((s[i]=='0' && s[i+1]=='1' && s[i+2]=='0') || (s[i]=='1' && s[i+1]=='0' && s[i+2]=='1'))
            {
                flag = 1;
                break;
            }
        }
        (flag==1)?cout<<"Good"<<endl:cout<<"Bad"<<endl;
    }
    
    return 0;
}