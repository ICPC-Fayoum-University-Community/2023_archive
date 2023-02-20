#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    char c = 'a';
    for (int w = 0; w < 26; w++) {
        for (int i = 0; i < n; i++) {
            if (tolower(s[i]) == c) {
                c++;
                break;
            }
            if (i == n - 1) {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
}