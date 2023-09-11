#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 7;

int main()
{
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int t; cin >> t; while (t--)
	{
		int n, a[N * N / 2]{}, ans[N]{}, size, cnt = 0;

		cin >> n;
		size = (n * (n - 1) / 2);
		for (int i = 0; i < size; ++i)
			cin >> a[i];
		sort(a, a + size);
		for (int i = 0; i < size; i += n)
		{
			ans[cnt++] = a[i];
			n--;
		}
		ans[cnt] = ans[cnt - 1];
		for (int i = 0; i <= cnt; ++i)
			cout << ans[i] << ' ';
		cout << '\n';
	}
}