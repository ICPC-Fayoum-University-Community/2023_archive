#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define speed ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

long long count(int k, int r)
{
    long long cnt = 0;
    while (1)
    {
        cnt++;
        if ((cnt * k) % 10 == 0 or (cnt * k) % 10 == r)
            break;
    }
    return cnt;
}

void solve()
{
    int k, r;
    cin >> k >> r;
    cout << count(k, r);
}

int main()
{
    speed
#ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    //    int t;cin>>t;
    //    while(t--)
    solve();

    return 0;
}
