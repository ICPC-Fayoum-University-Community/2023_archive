#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define speed ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

void solve()
{
    string s, t;
    cin >> s >> t;
    int pos = 0;
    for (int i = 0; i < t.size(); i++)
    {
        if (t[i] == s[pos])
            pos++;
    }
    cout << ++pos << endl;
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
