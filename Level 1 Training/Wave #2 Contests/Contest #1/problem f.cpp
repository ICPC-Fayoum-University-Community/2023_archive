#include <iostream>
using namespace std;
/**
* our pyramid has a base of sum(n) and as we go up n decreases
* to calculate number of stones needed we have to start from n = 1 and keep going up 
* until the sum is greater than our input
*/

int main()
{
	int n, k = 0, sum = 0; 
	cin >> n;
	while (sum < n)
	{
		k++; //increasing our k by 1
		sum += k * (k + 1) / 2; //we use this equation to calculate the sum

	}
	cout << k - 1; // since our loop breaks after sum becomes greater than n we have to output k-1 since k now is the size of the pyramid greater than the one we can build
}