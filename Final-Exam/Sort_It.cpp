#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string nm;
        int cls;
        char s;
        int id;
        int math_marks;
        int eng_marks;
        int total_marks;
};
bool cmp(Student a,Student b)
{
    if(a.total_marks == b.total_marks)
    {
        return a.id < b.id;
    }
    else
    {
        return a.total_marks > b.total_marks;
    }
}
int main()
{
    int n;
    cin>>n;
    Student arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i].nm>>arr[i].cls>>arr[i].s>>arr[i].id>>arr[i].math_marks>>arr[i].eng_marks;
    }
    for(int i=0; i<n; i++)
    {
        arr[i].total_marks = arr[i].math_marks + arr[i].eng_marks;
    }
    sort (arr,arr+n,cmp);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i].nm<<" "<<arr[i].cls<<" "<<arr[i].s<<" "<<arr[i].id<<" "<<arr[i].math_marks<<" "<<arr[i].eng_marks<<endl;
    }
    return 0;
}