#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while (test--)
    {
        string s;
        cin>>s;
        int sum_1 = 0;
        int sum_2 = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(i<3)
            {
                sum_1 += s[i];
            }
            else
            {
                sum_2 += s[i];
            }
        }
       (sum_1 == sum_2)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
    
    return 0;
}