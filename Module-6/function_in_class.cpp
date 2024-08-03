#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        int mark1;
        int mark2;
        Person(string name,int age,int mark1,int mark2)
        {
            this->name = name;
            this->age = age;
            this->mark1 = mark1;
            this->mark2 = mark2;
        }
        void print()
        {
            cout<<name<<" "<<age<<endl;
        }
        int total_mark()
        {
            return mark1+mark2;
        }
};
int main()
{
    string s;
    getline(cin,s);
    int age,mark1,mark2;
    cin>>age>>mark1>>mark2;
    Person ratul(s,age,mark1,mark2);
    cout<<ratul.name<<" "<<ratul.age<<endl;
    ratul.print();
    cout<<ratul.total_mark()<<endl;
    return 0;
}