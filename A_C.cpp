#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
         int a,b,n;
    cin>>a>>b>>n;
    int cnt=0;

    while(a<=n && b<=n){
        if(a>b) b+=a;
        else a+=b;
        cnt++;

    }
    cout<<cnt<<endl;
    

    }
    return 0;
}