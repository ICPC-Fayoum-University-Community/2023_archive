#include <iostream>
using namespace std;

/*
 * just iterate n times and store the count of each even / odd / +ve / -ve numbers
 */

int main() {
    int n;
    cin >> n;

    int even_cnt = 0, odd_cnt = 0, positive_cnt = 0, negative_cnt = 0;

    while (n--) {
        int x;
        cin >> x;

        // checking sign -- do not use or equal because 0 is not considered here
        if (x < 0) negative_cnt++;
        else if (x > 0) positive_cnt++;

        // checking if even
        if (x % 2 == 0) even_cnt++;
        else odd_cnt++;
    }

    // printing
    cout << "Even: " << even_cnt << endl
         << "Odd: " << odd_cnt << endl
         << "Positive: " << positive_cnt << endl
         << "Negative: " << negative_cnt << endl;

    return 0;
}