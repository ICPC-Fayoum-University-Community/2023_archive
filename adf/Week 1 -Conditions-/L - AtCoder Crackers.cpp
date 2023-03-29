#include<iostream>
using namespace std;

/*
 * you want to distribute n over k as evenly as possible
 * example 7 over 3 -> 2 2 3
 *         4 over 2 -> 2 2
*    then you need to get the max and min number among distributed values
 *   and print | max - min |
 * example 7 over 3 -> (3 - 2) = 1
 *         4 over 2 -> (2 - 2) = 0
 *
 * observe that .. the answer is always one or zero
 *
 * if the number n can be evenly distributed over k, then max and min are the same
 *          then .. max - min == 0
 *
 * if the number n cannot be evenly distributed over k, then max is = min + 1
 *          then .. max - min == 1
 *
 * so, if n is divisible by k .. the answer is 0
 * otherwise ans is 1
 */

int main() {
    int n, k;
    cin >> n >> k;

    if (n % k == 0) cout << 0;
    else cout << 1;

    return 0;
}
