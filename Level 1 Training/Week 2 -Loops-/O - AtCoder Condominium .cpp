#include <iostream>
using namespace std ;
/*                              AtCoder Condominium
 * at first we need to in declare three integer variables one of them for number of floors (n) , and the second one for the number of rooms (k), and the third one will be a counter and will be intialized with 0 (sum) .
 * get the numbers (n) and (k).
 * we can implement any type of loops ( while , for , do while ) and for the following operation we need to impelment nested loop.
 * make an interval for the outer loop from one to the given number of floors (1:(n)) , and in the inner loop make an interval from one to the given number of rooms (1:(k))  .
 * in the body of the inner loop we will multiply (i) by 100 and add (j) to the result .
 * at the end of every iteration add the final result to the sum variable (sum).
 * finally, print the value of (sum).
 * Prepared By: Ahmed Mohsen (group 8).
 */
 int main()
{
    int n , k , sum = 0 ;
    cin >> n >> k ;
    for (int i = 1; i <=n ; ++i) {
        for (int j = 1; j <= k ; ++j) {
            sum+=(i*100)+j;
        }
    }
cout << sum ; 
}
