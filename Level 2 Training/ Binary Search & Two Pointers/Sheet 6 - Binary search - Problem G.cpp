#include <bits/stdc++.h>
#define ll long long
using namespace std;

inline ll max(ll x , ll y) { return (x > y ? x : y);}

int needed_B =0 , needed_S=0 , needed_C=0 ;
int have_B , have_C , have_S ;
int price_B ,price_C , price_S ;
ll money ;

bool good(ll x)
{
    ll cost = max(0,x*needed_B-have_B)*price_B ;
    cost += max(0,x*needed_C-have_C)*price_C ;
    cost += max(0,x*needed_S-have_S)*price_S ;
    return cost <= money ;
}
ll solve()
{
    ll l=0 , r=1e13 ;
    while(l<r-1)
    {
        ll mid= (l+r)/ 2;
        if(good(mid)) l=mid ;
        else r=mid ;
    }
    return l ;
}
int main()
{
    string str;
    cin>>str;

    for(int i=0 ;i<str.size() ; i++)
    {
        if (str[i] == 'B') needed_B++;
        else if (str[i] == 'C') needed_C++;
        else needed_S++;
    }
    
    cin>>have_B>>have_S>>have_C;
    cin>>price_B>>price_S>>price_C ;
    cin>>money ;
    
    cout<<solve() ;

    return 0;
}