#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
using namespace std;

int n;
vector<double> speed , position ;
bool good(double x)
{
    double L=1 , R=1e9 ;
    for(int i=0;i<n;i++)
    {
        L=max(L,position[i]-speed[i]*x) ;
        R=min(R,position[i]+speed[i]*x) ;
    }
    return L<=R ;
}
double solve()
{
    double l=0,r=1e9;
    int number_of_iterations=0;
    while(number_of_iterations < 100)
    {
        number_of_iterations++;
        double mid=l+(r-l)/2.0;
        
        if(good(mid)) r=mid;
        else l=mid ;
    }
    return r;
}
int main()
{
    IOS
    cin>>n;
    
    position.resize(n);
    speed.resize(n);
    
    for(auto &it:position) cin>>it ;
    for(auto &it:speed) cin>>it ;
    
    cout<<fixed<<setprecision(8)<<solve();

    return 0;
}