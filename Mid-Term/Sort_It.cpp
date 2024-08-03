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
    //sorted by ascending order
    sort(arr,arr+n);
    //sorted array print ascending order
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    //sorted by descending order
    sort(arr,arr+n,greater<int>());
    cout<<endl;
    //sorted array print descending order
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}