#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define speed ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

void solve()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i += 2)
    {
        for (int j = i + 2; j < s.size(); j += 2)
        {
            if (s[i] > s[j])
                swap(s[i], s[j]);
        }
    }
    cout << s;
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
