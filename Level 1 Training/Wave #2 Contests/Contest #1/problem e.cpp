#include <iostream>
#include <cmath> // we include cmath so we can use abs function
#include <algorithm> // we include algorithm to use min function
using namespace std;
/**
* we want to find the house that's the closest to her house and we can buy
* we can find all the distances between her house and houses we can buy and take the minimum
*/
int main()
{
	int n, m, x, s, mx = 1000000000;
	cin >> n >> m >> s;

	for (int i = 1; i <= n; i++)
	{
		cin >> x; // we input price of house
		if (x <= s && x) // we check if we can buy house - notice if price is 0 we can't buy it
		{
			mx = min(abs((i - m)) * 10, mx); // we use this equation to calculate distance and put it in the min function to find the smallest distance
		}
	}
	cout << mx;
}