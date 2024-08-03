#include<iostream>
using namespace std;
int main()
{
    int number;
    cin >> number;
    int flag=1;
    for(int i=2; i<number; i++)
    {
        if(number%i==0)
        flag=0;
    }
    //ternary operator
    (flag==1)? cout<<"Prime Number": cout<<"Not Prime Number"<<endl;
}