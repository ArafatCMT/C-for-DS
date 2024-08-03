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
        string ss = "YES";
        int j = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                int val = s[i] - 32;
                s[i] = char (val);
            }
        }
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == ss[i])
            {
                j++;
            }
        }
        (j == 3)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
    return 0;
}