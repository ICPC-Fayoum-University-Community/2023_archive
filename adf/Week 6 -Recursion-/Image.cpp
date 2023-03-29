#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s, s2;
        cin >> s >> s2;
        s += s2;
        sort(s.begin(), s.end());
        int count = 0;
        for (int i = 0; i < s.length() - 1; i++) {
            if (s[i] != s[i + 1])
                count++;
        }
        cout << count << "\n";
    }
}