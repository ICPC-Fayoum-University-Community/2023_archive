#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

vector<int> a,b;
int n,k;
bool good(int x)
{
    for(int i=0,j=x;j<=n;i++,j++)
        if(min(a[j]-a[i],b[j]-b[i])<=k) return 1;

    return 0 ;
}
int solve()
{
    int l=0 , r=n+1;
    while(l<r-1)
    {
        int mid = (l+r)/2 ;
        if(good(mid)) l=mid;
        else r=mid ;
    }
    return l ;
}
int main()
{
    IOS
    cin>>n>>k;
    a.resize(n+1,0);
    b.resize(n+1,0);
    
    string str;
    cin>>str;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='a') a[i+1]++;
        else b[i+1]++;

        a[i+1]+=a[i];
        b[i+1]+=b[i];
    }
    cout<<solve();

    return 0;
}
