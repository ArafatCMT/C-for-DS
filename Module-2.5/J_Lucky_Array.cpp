#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int min=INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    int min_cnt = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == min)
        {
            min_cnt++;
        }
    }
    (min_cnt % 2 == 1) ? cout<<"Lucky" : cout<<"Unlucky";
    return 0;
}