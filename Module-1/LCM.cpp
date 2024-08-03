#include<iostream>
using namespace std;
int main()
{
    int number1,number2;
    cin>> number1 >> number2;
    int lcm=number1*number2;
    for(int i=1; number2 != 0; i++)
    {
        int rem=number1 % number2;
        number1 = number2;
        number2 = rem;
    }
    int gcd=number1;
    lcm =lcm/gcd;
    cout<< "The LCM IS : "<<lcm<<endl;
    return 0;
}