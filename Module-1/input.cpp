#include<iostream>
using namespace std;
int main()
{
    int number ;
    cin>> number;
    //multiplication table
    for(int i=1; i<=10; i++)
    {
        cout << i<<" x "<<number <<" = "<<i*number<<endl;
    }
    return 0;
}