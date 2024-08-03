#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string wd;
    while (ss >> wd)
    {
        for(string::iterator it=(wd.end()-1); it>=wd.begin(); it--)
        {
            cout<<*it;
        }
        cout<<" ";
    }
    
    return 0;
}