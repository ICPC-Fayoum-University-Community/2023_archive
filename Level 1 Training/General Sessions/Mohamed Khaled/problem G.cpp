#include<iostream>
using namespace std;

//https://vjudge.net/contest/555894#problem/G

int main() {

	int n, x; cin >> n >> x; int a[10];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		if (a[i] == x) {
			for (int j = i; j < n - 1; j++)
				a[j] = a[j + 1]; --i; --n;
		}
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";




	return 0;
}