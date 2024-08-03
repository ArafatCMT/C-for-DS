#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    char name[100];
    char section;
    int marks;
};
int main()
{
    int test;
    cin>>test;
    while (test--)
    {
        Student ob1,ob2,ob3;
        //input part
        cin>>ob1.id>>ob1.name>>ob1.section>>ob1.marks;
        cin>>ob2.id>>ob2.name>>ob2.section>>ob2.marks;
        cin>>ob3.id>>ob3.name>>ob3.section>>ob3.marks;

        //condition part
        if((ob1.marks > ob2.marks) && (ob1.marks > ob3.marks))
        {
            cout<<ob1.id<<" "<<ob1.name<<" "<<ob1.section<<" "<<ob1.marks<<endl;
        }
        else if((ob2.marks > ob1.marks) && (ob2.marks > ob3.marks))
        {
            cout<<ob2.id<<" "<<ob2.name<<" "<<ob2.section<<" "<<ob2.marks<<endl;
        }
        else if((ob3.marks > ob1.marks) && (ob3.marks > ob2.marks))
        {
            cout<<ob3.id<<" "<<ob3.name<<" "<<ob3.section<<" "<<ob3.marks<<endl;
        }
        else 
        {
            if((ob1.marks == ob2.marks) && (ob1.marks == ob3.marks))
            {
                if((ob1.id < ob2.id) && (ob1.id < ob3.id))
                {
                    cout<<ob1.id<<" "<<ob1.name<<" "<<ob1.section<<" "<<ob1.marks<<endl;
                }
                else if((ob2.id < ob1.id) && (ob2.id < ob3.id))
                {
                    cout<<ob2.id<<" "<<ob2.name<<" "<<ob2.section<<" "<<ob2.marks<<endl;
                }
                else
                {
                    cout<<ob3.id<<" "<<ob3.name<<" "<<ob3.section<<" "<<ob3.marks<<endl;
                }
            }
            else if(ob1.marks == ob2.marks)
            {
                if(ob1.id < ob2.id)
                {
                    cout<<ob1.id<<" "<<ob1.name<<" "<<ob1.section<<" "<<ob1.marks<<endl;
                }
                else
                {
                    cout<<ob2.id<<" "<<ob2.name<<" "<<ob2.section<<" "<<ob2.marks<<endl;
                }
            }
            else if(ob1.marks == ob3.marks)
            {
                if(ob1.id < ob3.id)
                {
                    cout<<ob1.id<<" "<<ob1.name<<" "<<ob1.section<<" "<<ob1.marks<<endl;
                }
                else
                {
                    cout<<ob3.id<<" "<<ob3.name<<" "<<ob3.section<<" "<<ob3.marks<<endl;
                }
            }
            else if(ob3.marks == ob2.marks)
            {
                if(ob3.id < ob2.id)
                {
                    cout<<ob3.id<<" "<<ob3.name<<" "<<ob3.section<<" "<<ob3.marks<<endl;
                }
                else
                {
                    cout<<ob2.id<<" "<<ob2.name<<" "<<ob2.section<<" "<<ob2.marks<<endl;
                }
            }
        }
    }
    return 0;
}