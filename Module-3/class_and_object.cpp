#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[50];
    int roll;
    double cgpa;
};
int main()
{
    Student a,b;
    cin.getline(a.name,50);
    cin>>a.roll>>a.cgpa;
    getchar();
    cin.getline(b.name,50);
    cin>>b.roll>>b.cgpa;
    cout<<a.name<<" "<<a.roll<<" "<<a.cgpa<<endl;
    cout<<b.name<<" "<<b.roll<<" "<<b.cgpa<<endl;
    return 0;
}