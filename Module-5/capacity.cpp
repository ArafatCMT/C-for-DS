#include<bits/stdc++.h>
using namespace std;
int main()
{
    // string s = "Arafat";
    // cout<<s.size();

    // string s;
    // cout<<s.max_size();

    // string s="ArafatHossainEmonSumaiyaAkter";
    // s.clear();
    // cout<<s.capacity()<<endl;
    // cout<<s.size()<<endl;


    // string s = "Arafat";
    // s.clear();
    // (s.empty()==true)?cout<<"empty": cout<<"not empty";
    // (s.size()==0)?cout<<"empty": cout<<"not empty";

    string s;
    cin>>s;
    s.resize(6);
    cout<<s<<endl<<endl;
    s.resize(20,'S');
    cout<<s<<endl;
    return 0;
}