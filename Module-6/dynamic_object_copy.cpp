#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        Person(string name,int age)
        {
            this->name = name;
            this->age = age;
        }
};
int main()
{
    string s1,s2;
    getline(cin,s1);
    int ag,age;
    cin>>ag;
    cin.ignore();
    getline(cin,s2);
    cin>>age;
    Person* rakib = new Person (s1,ag);
    Person *sakib = new Person (s2,age);
    *rakib =  *sakib; //copy dynamic objects
    cout<<rakib->name<<" "<<rakib->age<<endl;
    return 0;
}