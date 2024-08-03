#include<bits/stdc++.h>
using namespace std;
long long int my_fibo(int n)
{
    //base case
    if(n == 1 || n == 2)
    {
        if(n == 1)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    long long int fibo = my_fibo(n-1) + my_fibo(n-2);
    return fibo;
}
int main()
{
    int n;
    cin>>n;
    long long int fibo = my_fibo(n);
    cout<<fibo;
}
