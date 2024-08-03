#include<bits/stdc++.h>
using namespace std;
long long int fact(long long int n)
{
    if(n == 0)
    return 1;
    long long int factorial = fact(n-1);
    return factorial * n;
}
int main()
{
    long long int n;
    cin>>n;
    long long int factorial = fact (n);
    cout<<factorial;
    return 0;
}