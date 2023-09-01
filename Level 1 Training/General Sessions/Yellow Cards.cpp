#include<iostream>
using namespace std;

//https://codeforces.com/problemset/problem/1215/A

/*

------------------------- mistakes correction -------------------------

 mistake number 1:

 n can reach up to 2000000
 n ≤ a1*k1 + a2*k2 --> 1000*1000+1000*1000
 we can still use while loop solution and the time will be O(n)


 mistake number 2:

 In while loop solution we need a counter to make sure that
 the number of players we have fired is not more than
 the number of players in the team.

 int count = 0;

 while (n >= k2 && count<a2)
	mx++,n-= k2,++count;




 */
int main() {

	int a1, a2, k1, k2, mx = 0, mi = 0, n, n1;
	cin >> a1 >> a2 >> k1 >> k2 >> n; n1 = n;
	if (k1 <= k2) {
		mx = min(n / k1, a1);
		n -= mx * k1;
		mx += min(n / k2, a2);
	}
	else {
		mx = min(n / k2, a2);
		n -= mx * k2;
		mx += min(n / k1, a1);
	}
	n = n1;
	n = max(0, n - (k1 - 1) * a1);
	n = max(0, n - (k2 - 1) * a2);

	cout << min(n, a1 + a2) << " " << mx;

	return 0;
}
/*

2 a1
3 a2


5 k1
2 k2

min(50,3);
mx=3;
3*2;

100-6=94;

a1=3
a2=2
k1=4
k2=2

1      |    2
1 2 3     1 2
* * *     * *
* * *     * *
* * *
* * *

n-=(k2-1)*a2;
n-=(k1-1)*a1;


 int count = 0;
 while (n >= k2 && count<a2)
	mx++,n-= k2,++count;

*/