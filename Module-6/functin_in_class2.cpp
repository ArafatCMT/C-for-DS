#include<bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    string city;
    Person(string name,int age ,string city)
    {
        this->name = name;
        this->age = age;
        this->city = city;
    }
    void hello()
    {
        cout<<name<<" "<<age<<" "<<city<<endl;
    }
};
Person* fun()
{
    Person *raju = new Person ("Raju Ahmed",26,"Dhaka");
    Person *saju = new Person ("Saju Islam",56,"Rangpur");
    *raju = *saju;//dynamic object copy
    delete saju;
    return raju;

}
int main()
{
    Person * res = fun();
    res->hello();
    return 0;
}