#include<bits/stdc++.h>
using namespace std;
class Student 
{
public: 
    int roll;
    int cls;
    double gpa;
    Student (int roll,int cls,double gpa)
    {
        (*this).roll = roll;
        (*this).cls = cls ;
        (*this).gpa = gpa;
    }
};
int main()
{
    Student * rahim = new Student(342,10,4.89);
    cout<<rahim->roll<<" "<<rahim->cls<<" "<<rahim->gpa<<endl;
    return 0;
}