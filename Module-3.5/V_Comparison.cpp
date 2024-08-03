#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1,num2;
    char symbol;
    cin>> num1 >> symbol >> num2;
    switch (symbol)
    {
        case '>':
            if(num1 > num2)
            {
                cout<<"Right";
            }
            else
            {
                cout<<"Wrong";
            }
            break;
        case '<':
            if(num1 < num2)
            {
                cout<<"Right";
            }
            else 
            {
                cout<<"Wrong";
            }
            break;
        case '=':
            if(num1 == num2)
            {
                cout<<"Right";
            }
            else 
            {
                cout<<"Wrong";
            }
            break;
    }
    return 0;
}
