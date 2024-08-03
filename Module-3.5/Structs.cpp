#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    int age;
    char first_name[55];
    char last_name[55];
    int cls;
};
int main()
{
    Student a;
    cin>>a.age>>a.first_name>>a.last_name>>a.cls;
    cout<<a.age<<" "<<a.first_name<<" "<<a.last_name<<" "<<a.cls;
    return 0;
}