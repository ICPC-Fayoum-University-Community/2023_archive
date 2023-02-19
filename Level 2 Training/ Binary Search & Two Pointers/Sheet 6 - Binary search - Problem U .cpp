#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define ll long long

using namespace std;

int n;
bool good(long long mid)
{
    // summation of numbers from 1 to mid
    return ( mid*(mid+1) / 2 <= n ) ;
}
int solve()
{
    int l=1 , r=1e9 ;
    while(l<r-1)
    {
        int mid=(l+r)/2 ;
        if(good(mid)) l=mid;
        else r=mid ;
    }
    return l ;
}
int main()
{
    IOS

    int tt=1;
    cin>>tt;
    while(tt--)
    {
        cin>>n;
        cout << solve() << endl;
    }

    return 0;
}
