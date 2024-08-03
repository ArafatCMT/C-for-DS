#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int num1,num2,num3;
    char symbol_1, equal;
    cin>>num1>>symbol_1>>num2>>equal>>num3;
    switch (symbol_1)
    {
        case '+':
            if((num1+num2) == num3)
            {
                cout<<"Yes";
            }
            else
            {
                cout<<num1+num2;
            }
            break;
        case '-':
            if((num1-num2) == num3)
            {
                cout<<"Yes";
            }
            else
            {
                cout<<num1-num2;
            }
            break;
        case '*':
            if((num1*num2) == num3)
            {
                cout<<"Yes";
            }
            else
            {
                cout<<num1*num2;
            }
            break;
    }
    return 0;
}