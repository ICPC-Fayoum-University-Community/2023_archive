#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

int n;
vector<int>v;
string s1,s2;
bool good(int x)
{

    string str = s1;
    for(int i=0;i<x;i++)
        str[v[i]-1]='*' ;

    string remain = "";

    for(auto it:str)
    {
        if(it!='*') remain+=it;
    }

    str="";

    for(int i=0,j=0;i<s2.size() and j<remain.size();j++)
    {
        if(remain[j]==s2[i])
        {
            str+=remain[j];
            i++;
        }
    }

    return str==s2 ;
}
int solve()
{
    int l=-1,r=n;
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

    cin>>s1>>s2;
    n=s1.size();
    v.resize(n) ;
    for(auto &it:v) cin>>it ;

    cout<<solve();

    return 0;
}

