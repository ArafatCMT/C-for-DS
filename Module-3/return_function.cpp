#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll , int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
Student fun()
{
    Student arafat(55,4,3.89);
    return arafat;
}
int main()
{
    Student res = fun();
    cout<<res.roll<<" "<<res.cls<<" "<<res.gpa<<endl;
    return 0;
}