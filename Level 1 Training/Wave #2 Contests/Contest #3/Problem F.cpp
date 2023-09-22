#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		int a[400005];
		for (int i = 0; i < m; i++)
		{
			cin >> a[i];
		}
		int cat = 0, ans = 0;
		sort(a, a + m);
		for (int j = m - 1; j >= 0; j--)
		{
			if (cat >= a[j])
				break;
			cat += (n - a[j]);
			ans++;
		}
		cout << ans << endl;
	}
}