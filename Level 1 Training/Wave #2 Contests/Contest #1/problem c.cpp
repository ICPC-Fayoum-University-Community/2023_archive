#include <iostream>
using namespace std;
/*
* in the modulus operation the greatest possible outcome in a%b is always b-1
* that's why our answer is to output add x-1 to our summation and print it
*/
int main()
{
	int n, x, sum = 0; // we initailize sum by 0 to avoid runtime errors
	cin >> n;
	while (n--)
	{
		cin >> x;
		sum += x - 1;
	}
	cout << sum;
}