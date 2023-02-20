#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll n, mx = 0, curr = 0;
    cin >> n;
    while (n--) {
        ll out, in;
        cin >> out >> in;
        curr += in - out;
        mx = max(mx, curr);
    }
    cout << mx;
}