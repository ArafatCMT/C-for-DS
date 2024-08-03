#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int num1,num2;
    cin>>num1>>num2;
    long long int sum,mul,sub;

    sum = num1 + num2;
    mul = num1 * num2;
    sub = num1 - num2;

    cout<<num1<<" "<<"+"<<" "<<num2<<" "<<"="<<" "<<sum<<endl;
    cout<<num1<<" "<<"*"<<" "<<num2<<" "<<"="<<" "<<mul<<endl;
    cout<<num1<<" "<<"-"<<" "<<num2<<" "<<"="<<" "<<sub<<endl;
    return 0;
}