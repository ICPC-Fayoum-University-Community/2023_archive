	#include <bits/stdc++.h>
	using namespace std;

	int main() {
		int n;
		cin >> n;

		for (int i = 0; i < n; ++i)
		{
			int p, q;
			cin >> p >> q;

			if (p != q) {
				cout << "Happy Alex";
				return 0;
			}
		}
		cout << "Poor Alex";

	    return 0;
	}
