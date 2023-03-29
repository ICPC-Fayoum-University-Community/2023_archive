#include <iostream>
using namespace std;
int main()
{
    double A, B;
    cin >> A >> B;

    // Calculate number of hundreds of B milliliters 
    double n = B / 100;

    // Calculate number of kilocalories of B milliliters
    double ans = A * n;

    // print the answer
    cout << ans;


    return 0;
}