#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int n;
    cin >> n;
    int x, g1 = 0, g2 = 0, g3 = 0, g4 = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x == 1)g1++;
        else if (x == 2)g2++;
        else if (x == 3)g3++;
        else g4++;
    }
    ans += g4;
    ans += min(g3, g1);
    if (g3 > g1) {
        g3 -= g1;
        ans += g3;
        ans += (g2 + 1) / 2;
    } else {
        g1 -= g3;
        ans += g2 / 2;
        g1 += (g2 % 2) * 2;
        ans += (g1 + 3) / 4;
    }
    cout << ans;
}