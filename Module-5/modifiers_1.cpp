#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a="Arafat";
    string b="Sumaiya";
    // a=a+b;
    // a += b;
    // a.append(b); //string concatanation er jonno use hoi
    // b.append(a);
    // a[6]='b'; ->didn't work
     a="ArafatQ"; //work
    string c="E";
    a+=c; //work
    a=a+"Y";  //->work
    a.push_back('W'); //string  er last e ak ta character jog korar jonno use hoi
    a.pop_back();     //string er last er character remove korar jonno use kora hoi
    a.pop_back();
    a.pop_back();
    a.pop_back();
    cout<<a;
    return 0;
}