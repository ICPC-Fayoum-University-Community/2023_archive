#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())

using namespace std;

int main()
{
    IOS

    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first;
        v[i].second=i+1;
    }

    sort(all(v)) ;

    int idx1=-1,idx2 ;
    for(int i=0, j=n-1;i<j;)
    {
        if(v[i].first+v[j].first==k)
        {
            idx1=v[i].second,idx2=v[j].second;
            break;
        }

        if(k-v[i].first<v[j].first) j--;
        else i++;
    }

    if(idx1==-1) cout<<"IMPOSSIBLE";
    else cout<<idx1<<" "<<idx2;

    return 0;
}