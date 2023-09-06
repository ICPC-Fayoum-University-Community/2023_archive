#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define speed ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

char tmp_char = 'a';

int find_min(char c)
{
    int tmp = abs(c - tmp_char);
    if (tmp <= 13)
    {
        tmp_char = c;
        return tmp;
    }
    else
    {
        tmp_char = c;
        return 26 - tmp;
    }
}

int solve1(string &s)
{
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        count += find_min(s[i]);
    }
    return count;
}

void solve()
{
    string s;
    cin >> s;
    cout << solve1(s);
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
