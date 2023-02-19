#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define ll long long
#define all(v) ((v).begin()), ((v).end())

using namespace std;

int n,q;
vector<int>v;
int solve1(ll x)
{
    int l=-1,r=n;
    while(l<r-1)
    {
        int mid=(l+r)/2;
        if(v[mid]>=x) r=mid;
        else l=mid ;
    }
    return r;
}

int solve2(ll x)
{
    int l=-1,r=n;
    while(l<r-1)
    {
        int mid=(l+r)/2;
        if(v[mid]<=x) l=mid;
        else r=mid ;
    }
    return l;
}

int main()
{
    IOS

    freopen("haybales.in","r",stdin);
    freopen("haybales.out","w",stdout);

    cin>>n>>q;
    v.resize(n) ;
    for(auto &it:v) cin>>it;
    sort(all(v));
    while (q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<solve2(r)-solve1(l)+1<<endl;
    }

    return 0;
}