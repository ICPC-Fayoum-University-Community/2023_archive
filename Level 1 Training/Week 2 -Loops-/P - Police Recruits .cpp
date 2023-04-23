#include <iostream>
using namespace std;
/*
            -Police Recruits -
iterate n times (number of events) and input x if x = -1 decrease number of officers recruiter by one
but need to verfiy number of officers greater than 0 else increase number of crimes by one
else x not equal -1 increase number of officers by x 
*/
int main()
{
	int n, x, c = 0, z = 0;
	cin >> n;
	while (n--) {
		cin >> x;
		if (x == -1 && c > 0)
			c--;
		else if (x == -1)
			z++;
		else
			c += x;
	}
	cout << z;

    return 0;
}