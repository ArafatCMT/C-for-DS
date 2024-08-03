#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>> a >> b >> c >> d;
    // int mx= max(a,b);
    // cout<<mx<<endl;
    int mx=max({a,b,c,d});   //max function use korar jonno header file include korte hoi: #include<algorithm>
                            // 2 er odihik vlaue thake maximum value bair korar syntax: max( {  } )
    cout<<mx<<endl;
    return 0;
}