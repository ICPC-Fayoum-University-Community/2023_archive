#include<iostream>
using namespace std;

//https://vjudge.net/contest/555894#problem/H

int main() {

	int t; cin >> t;
	while (t--) {
		int n; cin >> n; int a[n]; bool check = 0;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a + n);

		for (int i = 0; i < n - 1; i++)
			if (a[i] == a[i + 1]) {
				cout << "NO"; check = 1; break;
			}
		if (!check)
			cout << "YES";

		cout << "\n";
	}




	return 0;
}
/*

5
8 7 1 3 4

O(n*n*t)





1 3 4 7 8
O(log(n)*n*t)


*/