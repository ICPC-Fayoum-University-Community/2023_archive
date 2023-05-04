#include <iostream>
using namespace std;
/*
* watch the recorded meeting in README.md for better understanding
* if we calclulate all possible cases of increments and decrements we find that we only get +3 or -3
* in that case no matter how many operations we make we can get it back to 0 or -1 or 1
* and since we are taking the absolute value it's either 1 or 0 depending on it's mod by 3
*/

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a, x, y, z;
		cin >> x >> y >> z;
		a = x + z - 2 * y; //calculating function given to us
		if (a % 3)
			cout << "1\n"; // don't forget breaking the line when there're are more test cases ^ ^
		else
			cout << "0\n";
	}
}