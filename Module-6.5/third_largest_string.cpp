#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int sz[n];
    for(int i=0; i<n; i++)
    {
        sz[i] = arr[i].size();
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(sz[i] < sz[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
    int largest = arr[0].size();
    int s_largest = -1;
    string word;
    for(int i=0; i<n; i++)
    {
        if(largest != arr[i].size());
        {
            s_largest = arr[i].size();
            word = arr[i];
            break;
        }
    }
    cout<<word;
    return 0;
}