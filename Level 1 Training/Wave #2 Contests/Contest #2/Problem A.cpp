#include <bits/stdc++.h>
using namespace std;

const int N = 1e2 + 7;

int main()
{
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int t; cin >> t; while (t--)
	{
		int n, a[N]{};
		bool f = 1;

		cin >> n;
		for (int i = 0; i < n; ++i)
			cin >> a[i];
		sort(a, a + n);
		for (int i = 0; i < n - 1; ++i)
		{
			if (a[i] == a[i + 1])
				f = 0;
		}
		cout << (f ? "YES" : "NO") << '\n';
	}
}