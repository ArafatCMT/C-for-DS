#include<bits/stdc++.h>
using namespace std;
int * dynamic_memory()
{
    int *ptr=new int;
    cout<<"dynamic_memory :" <<ptr<<endl;
    *ptr=100;
    return ptr;
}
int main()
{

    int *p= dynamic_memory();

    cout<<"main :"<<*p<<endl;
    // int *ptr=new int;
    // *ptr=100;
    // cout<<*ptr<<endl;


    // double *ptr =new double;
    // *ptr=7.45698;
    // cout<<fixed<<setprecision(4)<<*ptr<<endl;
    return 0;
}