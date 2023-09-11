#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;

int main()
{
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int n, tmp, j, i, a[N]{ 0 }, ans[N]{ 0 };

	cin >> n;
	for (i = 0; i < n; ++i)
		cin >> a[i];

	sort(a, a + n);
	for (i = 1, j = 0; i < n; i += 2)
		ans[i] = a[j++];
	tmp = j;
	for (i = 0; i < n; i += 2)
		ans[i] = a[j++];
	
	cout << tmp - !(n % 2) << '\n';
	for (i = 0; i < n; ++i)
		cout << ans[i] << ' ';
}