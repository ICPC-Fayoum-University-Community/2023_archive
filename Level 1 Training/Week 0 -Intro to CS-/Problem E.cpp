#include<iostream>
using namespace std;



/*

 The remainder when divided by 10 (modulus) is the last digit of the number.

 Modulus is how many numbers to be removed so that the numerator is divisible by the denominator.

 any number ends with 0 is divisible by 10 

 to make any number divisible by 10 , you need to subtract the last digit from the number thats why the 

 number modulus 10 is always the last digit of the number.


*/



int main() {

	long long n, m; cin >> n >> m;

	cout << n%10+m%10;

	return 0;
}
