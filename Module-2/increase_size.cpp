#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a=new int [3];
    int *b=new int [3];
    for(int i=0; i<3; i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    delete[] a; //delete a array
    a = new int [5];//increase a array
    for(int i=0; i<3; i++)
    {
        a[i]=b[i];
    }
    delete [] b;//delete b array
    a[3]=40;
    a[4]=50;
    for(int i=0; i<5; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}