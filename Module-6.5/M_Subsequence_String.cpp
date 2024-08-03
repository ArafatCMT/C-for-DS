#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string word="hello";
    int j=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==word[j])
        {
            j++;
        }
    }
    (j==5)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    return 0;
}