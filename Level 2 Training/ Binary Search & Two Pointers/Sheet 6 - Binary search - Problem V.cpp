#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define ll long long

using namespace std;

vector<int> v;
int n;
bool good(int x)
{
    ll r=0 ;
    for(int i=n-1;i>=0;i--)
    {
        r=max(r+v[i]-x,0ll) ;
    }
    return !r ;
}
int solve()
{
    int l=-1,r=1e9;
    while(l<r-1)
    {
        int mid = (l+r)/2 ;
        if(good(mid)) r=mid;
        else l=mid;
    }
    return r ;
}
int main()
{
    IOS

    int tt=1;
    cin>>tt;
    while(tt--)
    {
        cin>>n;
        v.resize(n);
        for(auto &it:v) cin>>it; 
        cout<<solve()<<endl;
    }
    return 0;
}