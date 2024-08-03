#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    int flag=0;
    string word;
    while (ss>>word)
    {
        int i=0, j=word.size()-1;
        while (i<j)
        {
           char temp = word[i];
           word[i] = word[j];
           word[j] = temp;
           i++;
           j--;
        }
        if(flag == 0)
        {
            cout<<word;
            flag = 1;
        }
        else
        {
            cout<<" "<<word;
        }
    }
    return 0;
}