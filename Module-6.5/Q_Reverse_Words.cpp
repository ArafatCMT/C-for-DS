#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,copy,word1,word2;
    getline(cin,s);
    copy = s;
    int cnt_word1 = 0;
    stringstream ss1(s);
    while (ss1 >> word1)
    {
        cnt_word1++;
    }
    stringstream ss2(copy);
    int cnt_word2=0;
    while (ss2 >> word2)
    {
        cnt_word2++;
        int i=0, j=word2.size()-1;
        while (i<j) //two pointes technic
        {
            char temp = word2[i];
            word2[i] = word2[j];
            word2[j] = temp;
            i++;
            j--;
        }
        if(cnt_word2==cnt_word1)
        {
            cout<<word2;
        }
        else
        {
            cout<<word2<<" ";
            
        }
    }
    return 0;
}