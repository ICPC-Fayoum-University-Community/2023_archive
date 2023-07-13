#include<iostream>
using namespace std;

int main() {

	//pairs

/*

0 < n <= 100000,0 < k <= 3

n=7
1 3 2 2 1 3 1

1 1 1 , 2 2 , 3 3
3   ,  2   , 2
3*2+3*2+2*2






0 1 2 3 4 5
0 3 2 2 0 0

*/

	int n, k, count = 0; cin >> n >> k; int a[10], b[10] = { 0 };
	for (int i = 0; i < n; i++)
		cin >> a[i];//--> O(n)
	//brute force

/*
	for (int i = 0; i < n; i++)//--> O(n*n)
		for (int j = i+1; j < n; j++)//--> O(n)
			if (a[i] != a[j])//--> O(1)
				count++;//--> O(1)
				*/
	//greedy 
	for (int i = 0; i < n; i++)
		++b[a[i]];
	for (int i = 1; i <= k; i++)
		for (int j = i + 1; j <= k; j++)
			count += b[i] * b[j];

	cout << count;// O(n*n)

	return 0;
}