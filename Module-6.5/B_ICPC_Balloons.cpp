#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while (test--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int sum=0;
        int cnt[26]={0};
        for(int i=0; i<s.size(); i++)
        {
            cnt[s[i]-65]++;
        }
        for(int i=0; i<26; i++)
        {
            if(cnt[i]!=0)
            {
                for(int j=1; j<=cnt[i]; j++)
                {
                    if(j==1)
                    {
                        sum += 2;
                    }
                    else
                    {
                        sum += 1;
                    }
                }
            }
        }
        cout<<sum<<endl;
    }
    
    return 0;
}