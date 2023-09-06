#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define speed ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

void func(int a[], int l) // 4  3
{
    int new_rand;
    bool uniq;
    for (int i = 0; i < l; i++) // 3
    {
        do
        {
            new_rand = 97 + (rand() % 26); //  0....25  // a....z
            uniq = 1;                      // a
            for (int j = 0; j < i; j++)
                if (a[j] == new_rand)
                    uniq = 0;
        } while (!uniq);
        a[i] = new_rand;
    }
}

void solve()
{
    int t, n, m = 0;
    cin >> t >> n;
    int array[n];
    srand(time(NULL) * getpid());
    func(array, n);

    for (int i = 0; i < t; i++) // ukx
    {
        int j = m;
        cout << (char)array[j];
        if (m == n - 1)
            m = 0;
        else
            m++;
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


// Another Solution
void solve() {
    int n, k;
    cin >> n >> k;
    string s = "abcdefghijklmnopqrstuvwxyz";
    string ans = "";
    for (int i = 0; i < n; i++) {
        ans += s[i % k];
    }
    cout << ans << endl;
   
}

int main() {
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


