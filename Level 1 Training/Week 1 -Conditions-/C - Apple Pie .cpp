#include<iostream>
using namespace std;

/*
 * we have b pieces of apple .. each two can be a pie
 * so .. let's convert each apple into 3 pieces
 *      2 apples -> 6 pieces
 *      n -> n * 3
 *      so, a * 3 + b == total number of pieces you have
 *      divide it by two to get the number of pies
 */

int main() {
    int a, b;
    cin >> a >> b;
    cout << (a * 3 + b) / 2;

    return 0;
}
