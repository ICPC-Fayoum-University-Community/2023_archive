#include <iostream>
#include <algorithm> // we include algorithm so we can use the function min
using namespace std;
/**
* here there're 4 paths we can take to go to the two stores and back to the house so we can buy both gifts
* and return to the house,
* first we need to calculate the distance of each path, then we can find the minimum distance
*/

int main()
{
	long long d1, d2, d3, d4, x, y, z, ans; // we use long long to avoid overflow
	cin >> x >> y >> z; 
	d1 = x + y + z; // first parth is to go from house to store 1 to store 2 back to house
	d2 = 2 * x + 2 * z; // second i to go from house to store 1 then to store 2 then back the same path
	d3 = 2 * y + 2 * z; // third is to go from house to store 2 and then to store 1 then back the same path
	d4 = 2 * x + 2 * y;// fourth is to go from house to store 2 back to house then to store 1 and back to house
	ans = min(d1, d2); // now we find the minimum between the two paths
	ans = min(ans, d3); // then the minimum between the minimum and the third path
	cout << min(ans, d4); // and finally we output the minimum between the current minimum and final path
}