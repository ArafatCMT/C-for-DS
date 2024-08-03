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
    int largest = INT_MIN;
    int s_largest = -1;
    int t_largest = -2;
    for(int i=0; i<n; i++)
    {
        if(arr[i] > largest)
        {
            t_largest = s_largest;
            s_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > s_largest)
        {
            t_largest = s_largest;
            s_largest = arr[i];
        }
        else if(arr[i] > t_largest)
        {
            t_largest = arr[i];
        }
    }
    cout<<t_largest;
    return 0;
}