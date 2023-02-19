#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define ll long long

using namespace std;

int n,t;
vector<int> v;
bool good(int x)
{
    priority_queue<ll,vector<ll>,greater<ll>> pq;
    ll time=0 ;
    for(int i=0;i<x;i++) pq.push(v[i]+time) ;
    int i=x;
    while(!pq.empty())
    {
        time=pq.top();
        while(!pq.empty() and pq.top()==time) pq.pop();
        while(i<n and pq.size()<x) pq.push(time+v[i++]) ;
    }
    return time <= t;
}

int solve()
{
    int l=0, r=n ;
    while(l<r-1)
    {
        int mid = l+(r-l)/2 ;
        if(good(mid)) r=mid;
        else l=mid ;
    }
    return r;
}

int main()
{
    IOS

    freopen("cowdance.in","r",stdin);
    freopen("cowdance.out","w",stdout);

    cin>>n>>t;
    v.resize(n) ;
    for(auto &it:v) cin>>it;
    cout<<solve();

    return 0;
}