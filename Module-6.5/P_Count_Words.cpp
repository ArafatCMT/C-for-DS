#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    bool found = false;
    int cnt = 0;
    for(char ch:s)
    {
        if(isalpha(ch))
        {
            if(found == false)
            {
                cnt++;
                found = true;
            }
        }
        else if (ch==' ' || ch=='?' || ch==',' || ch=='.' || ch=='!')
        {
            found = false;
        }
    }
    cout<<cnt<<endl;
    return 0;
}