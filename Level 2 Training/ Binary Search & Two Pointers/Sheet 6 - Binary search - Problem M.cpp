#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define ll long long

using namespace std;

vector<int> v;
int n,k;
bool good(ll x)
{
    ll needed=0 ;
    for(auto it:v)
    {
        needed+=max(0ll,x-it) ;
        if(needed>k) return 0 ;
    }

    return needed<=k ;
}
int solve()
{
    ll l=0 , r=3e9;
    while(l<r-1)
    {
        ll mid = l+(r-l)/2 ;
        if(good(mid)) l=mid;
        else r=mid ;
    }
    
    return l ;
}
int main()
{
    IOS
    cin>>n>>k;
    v.resize(n);
    for(auto &it:v) cin>>it ;
    
    cout<<solve();

    return 0;
}