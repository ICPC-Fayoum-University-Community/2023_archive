#include<iostream>
using namespace std;

//https://codeforces.com/contest/1397/problem/A

int main() {

	int t; cin >> t;
	while (t--) {
		int n; cin >> n; string a[n]; bool check = 0;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (char i = 'a'; i <= 'z'; i++) {
			int count = 0;
			for (int k = 0; k < n; k++)
				for (int j = 0; j < a[k].size(); j++)
					count += i == a[k][j];

			if (count % n) {
				cout << "NO"; check = 1; break;
			}
		}
		if (!check)
			cout << "YES";
		cout << "\n";
	}


	return 0;
}
/*
2
cbaq
ccba

c  b  a q
3  2  2 1
a
97 0


a b c d e
1 0 0 0 0



for (int i = 0; i < n; i++)
	for (int j = 0; j < a[i].size(); j++)
		++b[a[i][j]-'a'];
	for (char i = 'a'; i <= 'z'; i++)
	cout << b[i -'a']<< " ";
		for (char i = 'a'; i <= 'z'; i++)
			if (b[i - 'a'] % n) {

			cout << "NO"; check = 1; break;
			}
			if (!check)
			cout << "YES";







*/