#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


/*

 0  1  2  3  4  5 --- > 3
[10 10 10][01] [10 10]

*/



int main() {

    int n;
    cin >> n;

    string arr[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }


    int cnt = 1;

    for (int i = 0; i < n - 1; ++i)
    {
        if (arr[i] != arr[i + 1]) cnt++;
    }
    cout << cnt;


    return 0;
}