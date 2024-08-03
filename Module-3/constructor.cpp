#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll,int cls,double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
int main()
{
    Student Arafat(26,9,4.93);
    Student Rahim(45,10,4.55);
    cout<<Arafat.roll<<" "<<Arafat.cls<<" "<<Arafat.gpa<<endl;
    cout<<Rahim.roll<<" "<<Rahim.cls<<" "<<Rahim.gpa<<endl;
    return 0;
}