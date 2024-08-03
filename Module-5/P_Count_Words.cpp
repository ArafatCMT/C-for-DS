#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream sen;
    sen<<s;
    string word;
    int cnt = 0;
    while (sen >> word)
    {
        cout<<word<<endl;
        if(word=="?" || word=="," || word=="." || word=="!")
        {
            continue;
        }
        
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}