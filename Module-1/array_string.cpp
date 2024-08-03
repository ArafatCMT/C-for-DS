#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    char s[100];
    // fgets(s,100,stdin);
    int a;
    cin>>a;
    getchar();
    cin.getline(s,100); //c++ ee string space soho input naoer jonno cin.getline() use kora hoi
    cout<<a<<endl;
    cout<< s<<endl;
    return 0;
}