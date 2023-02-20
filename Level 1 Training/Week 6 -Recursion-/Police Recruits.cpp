#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int n, p = 0, x, crimes = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x == -1) {
            if (p)
                p--;
            else crimes++;
        } else p += x;
    }
    cout << crimes;
}