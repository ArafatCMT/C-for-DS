#include<bits/stdc++.h>
using namespace std;
class Freq
{
public:
    char value;
    int cnt;
};
int main()
{
    string s;
    cin>>s;
    Freq arr[26];
    for(int i=0; i<26; i++)
    {
        arr[i].value = char(i+'a');
        arr[i].cnt =0;
    }
    for(char c:s)
    {
        arr[c-'a'].cnt++;
    }
    for(int i=0; i<26-1; i++)
    {
        for(int j=i+1; j<26; j++)
        {
            if(arr[i].cnt == arr[j].cnt)
            {
                if(arr[i].value > arr[j].value)
                {
                    swap(arr[i],arr[j]);
                }
            }
            else if(arr[i].cnt < arr[j].cnt)
            {
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i=0; i<26; i++)
    {
        for(int j=0; j<arr[i].cnt; j++)
        {
            cout<<arr[i].value;
        }
    }
    return 0;
}