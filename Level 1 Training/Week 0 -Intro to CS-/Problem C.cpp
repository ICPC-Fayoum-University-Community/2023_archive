#include <iostream>

using namespace std;

int main() {
    long long x, y;
    cin >> x >> y;
    long long sum = 0, mul = 0, sub = 0;
    sum = x + y;
    mul = x * y;
    sub = x - y;
    cout << x << " + " << y << " = " << sum << endl;
    cout << x << " * " << y << " = " << mul << endl;
    cout << x << " - " << y << " = " << sub << endl;
}
