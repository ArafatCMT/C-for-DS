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
Student* fun()
{
    Student *arafat = new Student (12,10,4.51);
    return arafat;
}
int main()
{
    Student *res=fun();
    cout<<res->roll<<" "<<res->cls<<" "<<res->gpa<<endl;
    delete res;
    cout<<res->roll<<" "<<res->cls<<" "<<res->gpa<<endl;
    return 0;
}