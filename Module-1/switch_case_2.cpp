#include<iostream>
using namespace std;
int main()
{
    int number;
    cin>> number;
    switch(number%2)
    {
        case 0: //if(number%2==0)
            cout<<"Even"<<endl;
            break;
        case 1: 
            cout << "Odd"<<endl;
            break;
    }
    return 0;
}