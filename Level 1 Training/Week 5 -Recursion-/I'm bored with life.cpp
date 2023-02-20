#include <bits/stdc++.h>
#define ll long long
using namespace std;
int fact(int x) {
    if (x == 1) {
        return 1;
    } else {
        return x * fact(x - 1);
    }
}
int main() {
    ll a, b;
    cin >> a >> b;
    cout<<min(a,b);
}