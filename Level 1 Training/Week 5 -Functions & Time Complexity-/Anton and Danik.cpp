#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define speed ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

string solve1(int n, string s)
{
    int anton = 0, danik = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            anton++;
        else
            danik++;
    }
    if (anton > danik)
        return "Anton";
    else if (danik > anton)
        return "Danik";
    else
        return "Friendship";
}

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    cout << solve1(n, s);
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
