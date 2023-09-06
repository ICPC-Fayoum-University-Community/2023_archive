#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define speed ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

void solve()
{
    int n;
    cin >> n;
    int arr[n], arr_p[n], arr_m[n], arr_pe[n];
    int pos_p = 0, pos_m = 0, pos_pe = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            arr_p[pos_p++] = i + 1;
        }
        else if (arr[i] == 2)
        {
            arr_m[pos_m++] = i + 1;
        }
        else
            arr_pe[pos_pe++] = i + 1;
    }
    int teams = min({pos_p, pos_m, pos_pe});
    cout << teams << endl;
    for (int i = 0; i < teams; i++)
    {
        cout << arr_p[i] << ' ' << arr_m[i] << " " << arr_pe[i] << endl;
    }
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
