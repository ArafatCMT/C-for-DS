#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char ch;
    int cnt [26] = {0};
    for(int i=1; i<=n; i++)
    {
        cin>>ch;
        cnt[ch-'a']++;
    }
    for(int i=0; i<26; i++)
    {
        if(cnt[i] != 0)
        {
            for(int j=0; j<cnt[i]; j++)
            {
                cout<<char(i+97); //type casting
            }
        }
    }
    return 0;
}