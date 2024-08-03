#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while (test--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int even_cnt = 0;
        int odd_cnt = 0;
        int op_cnt = 0;
        int mn;
        if(n%2==0)
        {
            for(int i=0; i<n; i++)
            {
                if(arr[i]%2==0)
                {
                    even_cnt++;
                }
                else
                {
                    odd_cnt++;
                }
            }
            if(even_cnt == odd_cnt)
            {
                cout<<op_cnt<<endl;
            }
            else
            {
                mn = min(even_cnt,odd_cnt);
                for(int i=mn+1; i<=(n/2); i++)
                {
                    op_cnt++;
                    if(i==(n/2))
                    {
                        cout<<op_cnt<<endl;
                    }
                }
            }
        }
        else 
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}