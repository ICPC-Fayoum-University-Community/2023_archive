#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        long long n; cin >> n;
        long long a[200005];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        if (a[0] != 1) {
            cout << "NO" << endl;
            continue;
        }
        long long sum = 1;
        bool check = true;
        for (int i = 1; i < n; ++i) {
            if (a[i] > sum) {
                check = false;
            }
            sum += a[i];
        }
        if (check)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}