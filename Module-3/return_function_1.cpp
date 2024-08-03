#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll,int cls ,double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
Student fun()
{
    Student arafat(12,10,4.51);
    // Student * p = &arafat;
    return arafat;
}
int main()
{
    // Student *res=fun();
    // cout<<res->roll<<" "<<res->cls<<" "<<res->gpa<<endl;
    Student ans = fun();
    cout<<ans.roll<<" "<<ans.cls<<" "<<ans.gpa<<endl;
    return 0;
}