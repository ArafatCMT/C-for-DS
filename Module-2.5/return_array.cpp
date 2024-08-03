#include<bits/stdc++.h>
using namespace std;
int * get_array(int n)
{
    int *arr = new int [n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    return arr;//5 1 2 4 6 9 3

}
int main()
{
    int n;
    cin>>n;
    int *arr = get_array(n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}