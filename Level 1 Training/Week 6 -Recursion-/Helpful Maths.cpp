#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    string s;
    cin >> s;
    int arr[10000], a = 0;
    for (int i = 0; i < s.length(); i += 2) {
        arr[a] = s[i] - 48;
        a++;
    }
    sort(arr, arr + (s.length() + 1) / 2);
    for (int i = 0; i < a; i++) {
        if (i != a - 1)
            cout << arr[i] << '+';
        else cout << arr[i];
    }
}