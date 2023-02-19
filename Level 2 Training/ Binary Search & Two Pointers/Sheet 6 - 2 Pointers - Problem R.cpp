#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define ll long long
#define all(v) ((v).begin()), ((v).end())
using namespace std;

int main()
{
    IOS

    int n,k;
    cin>>n>>k;
    vector<pair<ll,int>> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first;
        v[i].second=i+1;
    }

    sort(all(v)) ;

    int idx1=-1,idx2,idx3 ;
    for(int mid=1;mid<n-1;mid++)
    {
        int i=mid-1 ;
        int j=mid+1 ;

        while(i>=0 and j<n)
        {
            if(v[i].first+v[j].first+v[mid].first==k)
            {
                idx1=v[i].second;
                idx2=v[mid].second;
                idx3=v[j].second;
                break;
            }
            else if(v[i].first+v[j].first+v[mid].first<k) j++;
            else i--;
        }

        if(idx1!=-1) break;
    }

    if(idx1==-1) cout<<"IMPOSSIBLE";
    else cout<<idx1<<" "<<idx2<<" "<<idx3;

    return 0;
}