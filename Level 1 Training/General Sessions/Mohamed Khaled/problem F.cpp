#include<iostream>
#include<algorithm>
using namespace std;

//https://vjudge.net/group/fuicpc
//https://vjudge.net/contest/555894#problem/F

int main() {

	int n; cin >> n; int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] == a[j]) {
				cout << "No";	return 0;
			}
	cout << "Yes";




	return 0;
}