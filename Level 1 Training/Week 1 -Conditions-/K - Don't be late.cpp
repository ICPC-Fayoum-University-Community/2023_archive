#include<iostream>
using namespace std;

/*
 * here you're given t, s, and d
 *
 * t denotes the time that they planned to meet at.
 * your task is to find if that you could reach there as early as possible
 *  moving with speed = s m/s
 *
 *  therefor
 *      calculate the time needed to reach distance d moving with s m/s
 *      since speed = distance / time
 *      therefor time= distance / speed
 *   if given t is >= calculated time .. you will be there
 *
 *   Notes:
 *   take input as doubles to avoid integer division .. WA
 *   or cast your variables using type casting
 */

int main() {
    double d, t, s;
    cin >> d >> t >> s;

    double time_calculated = d / s;
    if (t >= time_calculated) cout << "Yes";
    else cout << "No";
}
