#include<iostream>
using namespace std;
/*
 * Here you are given two DIFFERENT A and B
 * and the domain given is just (1, 2, 3)
 * therefor
 *  just check if either of these numbers is given to you as an input or not
 */
int main() {
    int a, b;
    cin >> a >> b;

    if (a != 3 && b != 3)
        cout << 3;
    else if (a != 2 && b != 2)
        cout << 2;
    else
        cout << 1;
}
