#include<bits/stdc++.h>
using namespace std;
class Employee
{
    public:
        string name;
        int id;
        int salary;
};
int main()
{
    int n;
    cin>>n;
    // Employee a[n];
    Employee *a = new Employee[n]; //dynamic array
    for(int i=0; i<n; i++)
    {
        cin.ignore();
        getline(cin,a[i].name);
        cin>>a[i].id>>a[i].salary;
    }
    for(int i=0; i<n; i++)
    {
        cout<<a[i].name<<" "<<a[i].id<<" "<<a[i].salary<<endl;
    }
    return 0;
}