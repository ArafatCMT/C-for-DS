#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100005];
    int cnt[26] = {0};
    while (cin.getline(s,100005))
    {
        for(int i=0; s[i]!='\0'; i++)
        {
            cnt[s[i]-'a']++;
        }
        for(int i=0; i<26; i++)
        {
            if(cnt[i] != 0)
            {
                for(int j=0; j<cnt[i]; j++)
                {
                    cout<<char(i+97);
                }
            }
            cnt[i] = 0;
        }
        cout<<endl;
    }
    
    return 0;
}