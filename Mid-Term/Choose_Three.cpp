#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while (test--)
    {
        int n,sum;
        cin>>n>>sum;
        int arr[n];
        int flag = 0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int array_sum = 0;
        for(int i=0; i<n-2; i++)
        {
            for(int j=i+1; j<n-1; j++)
            {
                for(int k=j+1; k<n; k++)
                {
                    array_sum = arr[i] + arr[j] + arr[k];
                    if(array_sum == sum)
                    {
                        flag = 1;
                        break;
                    }
                }
            }
        }
        (flag==1) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
    return 0;
}