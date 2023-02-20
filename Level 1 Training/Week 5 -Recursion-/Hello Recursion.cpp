#include <bits/stdc++.h>
#define ll long long
using namespace std;
int fun(int x) {
    if (x != 0) {
        int d;
        cin >> d;
        return d + fun(x - 1);
    } else return 0;
}
int main() {
    int t;
    cin >> t;
    for (int w = 1; w <= t; w++) {
        int n;
        cin >> n;
        cout << "Case " << w << ": " << fun(n) << "\n";
    }
}