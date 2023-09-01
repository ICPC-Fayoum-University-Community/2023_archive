#include<iostream>
#include<cmath>
using namespace std;

//https://vjudge.net/contest/553719#problem/T


int main() {

	int n, m; cin >> n >> m;
	for (int i = 0; n * pow(2, i) <= m; i++)
		for (int j = 0; n * pow(2, i) * pow(3, j) <= m; j++) {
			if (n * pow(2, i) * pow(3, j) == m) {
				cout << i + j;	return 0;
			}
		}
	cout << -1;
	return 0;
}
/*

	n = 1, m = 5e8;

	n* (2 ^ x * 3 ^ y) == m

	3^0=1 ,m=7

	n*pow(2, x)*pow(3, y);

	pow(2,29) = 8;
	2

	log2();

*/