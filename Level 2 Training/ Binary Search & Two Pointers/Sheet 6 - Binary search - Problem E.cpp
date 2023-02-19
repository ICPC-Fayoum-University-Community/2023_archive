#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define ll long long
#define all(v) ((v).begin()), ((v).end())
using namespace std;

int n,buses_we_have,capacity;
vector<int> v ;
bool good(ll x)
{
    int buses_we_need=1 , size_of_current_bus=1 , mn=v[0];
    for(int i=1;i<n;i++)
    {
        if(size_of_current_bus>=capacity || v[i]-mn>x)
        {
            buses_we_need++;
            size_of_current_bus=1;
            mn=v[i] ;
        }
        else size_of_current_bus++;
    }
    return buses_we_need <= buses_we_have ;
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

    freopen("convention.in","r",stdin);
    freopen("convention.out","w",stdout);

    cin>>n>>buses_we_have>>capacity;
    v.resize(n) ;
    for(auto &it:v) cin>>it;
    sort(all(v)) ;
    cout<<solve();

    return 0;
}
