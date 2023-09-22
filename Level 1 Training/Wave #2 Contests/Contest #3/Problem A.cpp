#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
        long long n, m;
        cin >> n >> m;
        long long sum_cycle = 0;
        for (long long i = m, j = 0; i <= n && j < 10; i += m, j++)
            sum_cycle += (i % 10);

        long long k = n / m;
        long long rem = k % 10;
        long long ans = (sum_cycle * (k / 10));

        for (long long i = m, j = 0; i <= n && j < rem; i += m, j++)
            ans += (i % 10);
        cout << ans << endl;
	}
}