#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define ll long long
#define all(v) ((v).begin()), ((v).end())

using namespace std;

vector<int> v;
int n,k;
bool good(int x)
{
    int balls=1 ,first_pos=v[0] ;
    for(int i=0;i<n;i++)
    {
        if(v[i]-first_pos>2*x)
        {
            balls++;
            first_pos=v[i] ;
        }
    }
    return balls<=k ;
}
int Binary_Search()
{
    int l=0,r=1e9 ;
    while(l<r-1)
    {
        int mid = (l+r)/2 ;
        if(good(mid)) r=mid ;
        else l=mid;
    }
    return r ;
}
int main()
{
    IOS

    freopen("angry.in","r",stdin);
    freopen("angry.out","w",stdout);

    cin>>n>>k;
    v.resize(n);
    for(auto &it:v) cin>>it;
    sort(all(v)) ;
    cout<<Binary_Search() ;

    return 0;
}