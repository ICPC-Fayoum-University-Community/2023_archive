#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a[10000];
        cin >> n;
        bool f = true;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n - 2; i++) {
            if (a[i] % 2 != a[i + 2] % 2) {
                f = false;
                break;
            }
        }
        if (f)cout << "YES\n";
        else cout << "NO\n";
    }
}