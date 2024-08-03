#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        char s[100005];
        cin>>s;
        int flag = 0;
        for(int i=0; i<strlen(s); i++)
        {
            if((s[i]=='0' && s[i+1]=='1' && s[i+2]=='0') || (s[i]=='1' && s[i+1]=='0' && s[i+2]=='1'))
            {
                flag = 1;
                break;
            }
        }
        (flag==1)? cout<<"Good"<<endl :cout<<"Bad"<<endl;
    }
    
    return 0;
}