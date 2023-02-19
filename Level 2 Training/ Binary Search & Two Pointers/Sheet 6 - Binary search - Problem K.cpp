#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define ll long long
using namespace std;

int n,k;
bool good(ll v)
{
    ll lines_of_code=0 , K=1;
    while (v/K)
    {
        lines_of_code+=v/K ;
        K*=k;
    }
    return lines_of_code>=n ;
}
int solve()
{
    ll l=-1,r=1e10;
    while(l<r-1)
    {
        ll mid=(l+r)/2;
        if(good(mid)) r=mid;
        else l=mid ;
    }
    return r;
}
int main()
{
    IOS

    cin>>n>>k;
    cout<<solve();

    return 0;
}
