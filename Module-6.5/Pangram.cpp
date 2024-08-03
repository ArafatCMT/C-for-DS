#include<bits/stdc++.h>
using namespace std;
bool Pangram(string s)
{
    int cnt [26] = {0};
    for(int i=0; i<s.size(); i++)
    {
        cnt[s[i]-'a']++;
    }
    for(int i=0; i<26; i++)
    {
        if(cnt[i] == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s;
    getline(cin,s);
    bool found = Pangram(s);
    if(found == true)
    {
        cout<<"Pangram"<<endl;
    }
    else
    {
        cout<<"Not Pangram"<<endl;
    }
    return 0;
}