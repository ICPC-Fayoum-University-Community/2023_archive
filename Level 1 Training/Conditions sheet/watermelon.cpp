#include<iostream>
using namespace std;

/*
 * in this problem .. you need to divide w into 2 even numbers
 * 4 -> 2 2
 * 6 -> 4 2
 * 5 -> 3 2 .. observe that any odd number cannot be divided into 2 even numbers
 * Edge Case:
 *  there is an exception ...
 *      **  2 -> 1 1
 *      2 is even but cannot be divided also ..
 * therefor
 *      if w is odd or is equal to two .. the answer is No
 *      otherwise, answer = Yes
 */

int main() {
    int w;
    cin >> w;

    if (w % 2 == 1 || w == 2) {
        cout << "No";
    }
    else {
        cout << "Yes";
    }
}
