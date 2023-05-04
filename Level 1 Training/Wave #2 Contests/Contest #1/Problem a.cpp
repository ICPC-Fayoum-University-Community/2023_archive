#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;  //input number of testcases
	while (t--)
	{
		int k, n, x;
		cin >> n >> k; // take number of students and minimum number of attendance needed
		while (n--)
		{
			cin >> x; // input the time of arrival of every student
			if (x > 0) // notice that if the time of arrival is positive then the student is late and we don't take his attendance
				continue;
			else
				k--; //if the student arrived on time or early then we subtract the minimum needed attendance by 1
		}
		if (k <= 0) // if we have reached the goal of k students on time then k should be 0 or less
			cout << "NO\n";
		else // if k is still positive then we have less than k students on time and the answer will be yes the class will be canceled 
			cout << "YES\n"; 
	}
}