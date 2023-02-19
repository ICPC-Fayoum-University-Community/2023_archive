#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define ll long long

using namespace std;

vector<int> v;
int n,t;
bool good(ll x)
{
    ll products = 0 ;
    for(auto it:v) products+=x/it ;
    
    return products>=t ;
}
ll solve(ll mn)
{
    ll l=0,r=mn*t ;
    while(l<r-1)
    {
        ll mid = l+(r-l)/2 ;
        if(good(mid)) r=mid ;
        else l=mid;
    }
    return r ;
}
int main()
{
    IOS

    cin>>n>>t;
    v.resize(n) ;
    for(auto &it:v) cin>>it;
    
    int mn=1e9 ;
    for(auto it:v) mn=min(mn,it) ;
    
    cout<<solve(mn) ;

    return 0;
}
