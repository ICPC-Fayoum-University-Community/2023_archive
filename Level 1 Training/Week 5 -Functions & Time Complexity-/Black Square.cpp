#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define speed ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

int game(int arr[], string s)
{
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int tmp = s[i] - '0';
        tmp--;
        count += arr[tmp];
    }
    return count;
}

void solve()
{

    int arr[4];
    for (int i = 0; i < 4; i++)
        cin >> arr[i];
    string s;
    cin >> s;
    cout << game(arr, s);
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
