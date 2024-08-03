#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int mark;
    Student(string name,int roll,int mark)
    {
        this->name = name;
        this->roll = roll;
        this->mark = mark;
    }
    void hello()
    {
        cout<<name<<" "<<roll<<" "<<mark<<endl;
    }
};
int main()
{
    Student *ramim = new Student("Ramim Ali",29,78);
    Student *hamim = new Student("Hahim Ali",15,85);
  
    *ramim = *hamim;
    delete hamim;
    ramim->hello();

    return 0;
}