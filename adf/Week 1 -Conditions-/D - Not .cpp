#include <iostream>
using namespace std;

/*
 * !5   => 0
 * !-5  => 0
 * !0   => 1
 * any NOT of a non zero value is false -0- ..
 */

int main() {
    int a;
    cin >> a;

    cout << !a;
}
