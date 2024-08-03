#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    // char name[50];
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;
    Student(string name,int roll,char section,int math_marks,int cls)
    {
        // strcpy(this->name,name);
        this->name = name;
        this->roll = roll;
        this->section = section ;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};
int main()
{
    Student arafat("Arafat Hossain Emon",55,'B',92,10);
    Student nahid("Nahid Ahmed",81,'B',89,10);
    Student bayezid("Bayezid Bostami",40,'A',85,10);
    if(arafat.math_marks > nahid.math_marks && arafat.math_marks > bayezid.math_marks)
    {
        cout<<arafat.name;
    }
    else if(nahid.math_marks > arafat.math_marks && nahid.math_marks > bayezid.math_marks)
    {
        cout<<nahid.name;
    }
    else 
    {
        cout<<bayezid.name;
    }
    return 0;
}