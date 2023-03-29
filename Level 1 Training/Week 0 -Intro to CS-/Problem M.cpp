#include <iostream>
using namespace std;
int main()
{
    long long n , ans = 0;
    cin >> n;       //  143

    // 1 5 10 20 100

    ans += n / 100;  // ans = 1
    n = n % 100;     // n = 43

    ans += n / 20;   // ans = 3
    n = n % 20;      // n = 3

    ans += n / 10;   // ans = 3
    n = n % 10;      // n = 3

    ans += n / 5;    // ans = 3
    n = n % 5;       // n = 3

    ans += n;        // ans = 6
      
    cout << ans;




    return 0;
}