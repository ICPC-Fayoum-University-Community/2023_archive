#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define speed ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

void game(int n, int arr[])
{
    int sereja = 0, dima = 0;
    int cnt = 0;
    int j = 0;
    for (int i = n - 1; i >= j;)
    {
        if (cnt % 2 == 0)
        {
            if (arr[i] > arr[j])
                sereja += arr[i--];
            else
                sereja += arr[j++];
        }
        else
        {
            if (arr[i] > arr[j])
                dima += arr[i--];
            else
                dima += arr[j++];
        }
        cnt++;
    }
    cout << sereja << " " << dima;
}

void solve()
{
    int n;
    int arr[1001];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    game(n, arr);
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
