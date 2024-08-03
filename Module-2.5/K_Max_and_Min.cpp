#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3];
    for(int i=0; i<3; i++)
    {
        cin>>arr[i];
    }
    int minimum = INT_MAX;
    int maximum = INT_MIN;
    for(int i=0; i<3; i++)
    {
        if(minimum > arr[i])
        {
            minimum = arr[i];
        }
        if(maximum < arr[i])
        {
            maximum = arr[i];
        }
    }
    cout<<minimum<<" "<<maximum;
    return 0;
}