#include<iostream>
#include<cmath>
using namespace std;

/* put all odd numbers less than or equal to n next to each other
   then all even numbers less than or equal to n next to each other



  n is our range of numbers from 1 to n
  k is the position


 ----------------------------- n is even ---------------

  n/2 numbers are odd and n/2 numbers are even


  if k <= n/2 then we are in odd numbers part
  to get the number in that odd position we use the following formula:  2 * k - 1


  if k > n/2 then we are in even numbers part
  to get the number in that even position we use the following formula:  2 * (k - n/2) we do the k - n/2
  to remove the odd part out of our calculations


  let n = 8


  odd          even
  1 2 3 4      5 6 7 8 --> position
  1 3 5 7  ||  2 4 6 8 --> number


----------------------------- n is odd -----------------


  n/2+1 numbers are odd and n/2 numbers are even


   if k <= n/2+1 then we are in odd numbers part
  to get the number in that odd position we use the following formula:  2 * k - 1



  if k > n/2+1 then we are in even numbers part
  to get the number in that even position we use the following formula:  2 * (k - n/2+1)  we do the k - n/2+1
  to remove the odd part out of our calculations


  let n = 7


  odd          even
  1 2 3 4      5 6 7  --> position
  1 3 5 7  ||  2 4 6  --> number


  -------------------------- easiest way to solve -------------------------------
  to solve the problem without checking if n is even or odd we use ceil function or (n+1)/2


  let middle = ceil((double)n/2) or middle = (n+1)/2


  if k <= middle  then we are in odd numbers part
  to get the number in that odd position we use the following formula:  2 * k - 1


  if k > m then we are in even numbers part
  to get the number in that even position we use the following formula:  2 * (k - middle)


*/


int main() {
	
	long long k, n;
	cin>>n>>k;
	
	long long middle = ceil(n / 2.0);
	
	if(k <= middle) {
 	   cout<<(2 * k) - 1;
	}
	else {
   	 cout<<(k - middle) * 2;
}
	
// ----- the code in more details -------
// 	long long n, k;
// 	cin >> n >> k;

// 	if (n % 2 != 0) {	
// 		if (k <= n / 2 + 1)
// 			cout << k * 2 - 1;
// 		else
// 			cout << (k - (n / 2 + 1)) * 2;
// 	} 
// 	else {
// 		if (k <= n / 2)
// 			cout << k * 2 - 1;
// 		else
// 			cout << (k - n / 2) * 2;
// 		}

	return 0;
}
