#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *arr=new int [n];
    int *arr_new=new int [n+5];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        arr_new[i]=arr[i];
    }
    delete [] arr;
    for(int i=n; i<n+5; i++)
    {
        cin>>arr_new[i];
    }
    for(int i=0; i<n+5; i++)
    {
        cout<<arr_new[i]<<" ";
    }
    return 0;
}