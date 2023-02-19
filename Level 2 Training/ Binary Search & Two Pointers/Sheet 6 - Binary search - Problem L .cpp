#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
using namespace std;

int n,c;
vector<int> v ;
bool good(int x)
{
    int cnt=1 , last_cow_idx=0;
    for(int i=1;i<n;i++)
    {
        if(v[i]-v[last_cow_idx]>=x)
        {
            last_cow_idx=i;
            cnt++;
        }
    }
    return cnt>=c ;
}
int solve()
{
    int l=0,r=1e9+10;
    while(l<r-1)
    {
        int mid=(l+r)/2;
        if(good(mid)) l=mid;
        else r=mid ;
    }
    return l;
}
int main()
{
    IOS

    int tt=1;
    cin>>tt;
    while(tt--)
    {
        cin>>n>>c;

        v.resize(n) ;
        for(auto &it:v) cin>>it ;
        sort(all(v)) ;

        cout<<solve()<<endl;

        v.clear();
    }
    return 0;
}
