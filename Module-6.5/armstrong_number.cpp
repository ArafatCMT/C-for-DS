#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m = n;
    int sum = 0;
    for(int i=0; n!=0; i++)
    {
        int rem = n % 10;
        sum += pow(rem,3);
        n = n/10;
    }
    // (sum == m)? cout<<"Armstrong Number"<<endl:cout<<"Not Armstrong Number"<<endl;
    cout<<sum;
    return 0;
}