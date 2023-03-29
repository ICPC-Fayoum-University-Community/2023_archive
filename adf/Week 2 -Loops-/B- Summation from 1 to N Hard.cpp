#include <iostream>

using namespace std;
/* sum the integers from 1 to n
 * we can use a formula to get the sum instead of using loop from 1 --> n
 * let's say we want to get the sum of integers from 1 to 7 --> n=7
 *
 * so our series will be .. 1 + 2 + 3 + 4 + 5 + 6 + 7
 * what if we write it like:7 + 6 + 5 + 4 + 3 + 2 + 1
 *
 * focus in this trick
 *
 * the sum of the first element of s1 and s2 =1+7=8...
 * the sum of the second element of s1 and s2 =2+6=8...
 *
 * i think you noticed something..
 * the sum will be 8-->(n+1) at every position
 * so instead of repeating these steps we will use multiplication
 *   (n+1)*n-->(8*7=56)
 *
 * but we have now the sum of two series from 1 to one and we need the sum of one series only?
 * so we will divide the eq by two-->((n+1)*n)/2-->in this ex it will be 8*7/2=28
 *
 * my friend , you are able now to calc the sum from 1 to n by yourself without using loops
 * let's code our problem now...
*/


int main() {
    long long n, sum;
    cin >> n;
    sum = ((n + 1) * n) / 2;
    cout << sum;




    return 0;
}
