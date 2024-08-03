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
            (*this).age = age;
        }
};
int main()
{
    string s;
    getline(cin,s);
    int age;
    cin>>age;
    Person akib(s,age);
    cout<<akib.name<<" "<<akib.age<<endl;
    return 0;
}