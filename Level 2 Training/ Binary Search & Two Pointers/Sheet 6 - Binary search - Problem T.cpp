#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define ll long long

using namespace std;

int n,k;
vector<int> v;

bool good(ll x)
{
    ll sum=0 , parts=1;
    for(int i=0;i<n;i++)
    {
        if(sum+v[i]>x)
        {
            parts++;
            sum=v[i];
        }
        else sum+=v[i];
    }
    return parts<=k ;
}

ll solve(int mx,ll sum)
{
    ll l=mx-1, r=sum;
    while(l<r-1)
    {
        ll mid = l+(r-l)/2 ;
        if(good(mid)) r=mid;
        else l=mid ;
    }
    return r;
}

int main()
{
    IOS

    cin>>n>>k;
    v.resize(n) ;
    for(auto &it:v) cin>>it ;
    ll sum=0, mx=0 ;
    for(int i=0;i<n;i++)
    {
        sum+=v[i];
        mx=max(mx,(ll)v[i]) ;
    }

    cout<<solve(mx,sum);

    return 0;
}