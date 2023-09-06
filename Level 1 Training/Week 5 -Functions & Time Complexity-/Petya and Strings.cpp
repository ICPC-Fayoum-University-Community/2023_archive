#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define speed ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

int solve1(string s1, string s2)
{
    if (s1 == s2)
        return 0;
    else if (s1 > s2)
        return 1;
    else
        return -1;
}

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < s1.size(); i++)
        s1[i] = tolower(s1[i]);
    for (int i = 0; i < s2.size(); i++)
        s2[i] = tolower(s2[i]);
    cout << solve1(s1, s2);
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
