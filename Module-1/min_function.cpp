#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>> a >> b >> c >> d;
    // int mn= min(a,b);
    // cout << mn <<endl;
    int mn= min({a,b,c,d});// min function use korar jonno header file include korte hoi: #include<algorithm>
                            // 2 er odihik vlaue thake minimun value bair korar syntax: min( {  } )
    cout << mn << endl;
    return 0;
}