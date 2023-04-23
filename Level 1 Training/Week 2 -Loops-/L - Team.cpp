#include <iostream>
using namespace std;
/*
			-Team-
 In this problem if 2 or 3 of the team are sure about the solution
 if 3: (1 1 1) summation is greater than 2
 if 2: ex:(1 0 1) summation is equal to 2
 so if the summation is greater than or equal 2 then team will implement the problem.
*/

int main() {
	int n, problems_to_be_solved = 0;
	cin >> n;
	
	while (n--) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a + b + c >= 2)
			problems_to_be_solved++;
	}
	cout << problems_to_be_solved;
    return 0;
}
