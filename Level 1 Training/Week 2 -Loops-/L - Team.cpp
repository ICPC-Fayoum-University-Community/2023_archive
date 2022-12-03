#include <iostream>
using namespace std;
/*
			-Team-
 In this problem if 2 or 3 of the team are sure about the solution
 if 3: (1 1 1) summation is greater than 2
 if 2: ex:(1 0 1) summation is equal to 2
 so if the summation is greater than or equal 2 then team will implement the problem.
*/

int main()
{
	int n, a, b, c, x = 0; cin >> n;
	while (n--) {
		cin >> a >> b >> c;
		if (a + b + c >= 2)
			x++;
	}
	cout << x;
    return 0;
}