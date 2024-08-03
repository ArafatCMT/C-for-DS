#include<bits/stdc++.h>
using namespace std;
void display (int n, char c)
{
    if(n==0)
    {
        return ;
    }
    cout<<c<<" ";
    display(n-1,c);
}
int main()
{
    int test;
    cin>>test;
    while (test--)
    {
        int n;
        char c;
        cin>>n>>c;
        display (n,c);
        cout<<endl;

    }
    
    return 0;
}