#include <bits/stdc++.h>
using namespace std;

#define ll          long long
#define lp1(n)      for(ll i = 1; i <= (n); ++i)
#define lp(n)       for(ll i = 0; i < (n); ++i)
#define tc          ll testcase;   cin>>testcase;   while(testcase--)
#define all(v)      (v).begin(), (v).end()
#define allr(v)     (v).rbegin(), (v).rend()
#define pb          push_back
#define yes         cout<<"yes"<<endl
#define no          cout<<"no"<<endl
#define endl        "\n"
#define improve     ios_base::sync_with_stdio(false); cin.tie(null); cout.tie(null)
int dx[4]{-1, 0, 1, 0};
int dy[4]{0, 1, 0, -1};

/* 3ein39
                    " وَأَن لَّيْسَ لِلْإِنسَانِ إِلَّا مَا سَعَى ﴿39﴾ وَأَنَّ سَعْيَهُ سَوْفَ يُرَى ﴿40﴾ ثُمَّ يُجْزَاهُ الْجَزَاء الْأَوْفَى "
                                      my way to my dream....
*/

/*
 * You are only allowed to do 1 operation .. so once you find a character no in place
 * swap it with its neighbour and break ..
 *
 * if s == t then print yes
 * else print no
 */

int main() {
    string s, t;
    cin >> s >> t;

    int n = s.size(); // t.size()

    for (int i = 0; i < n - 1; ++i) {
        if (s[i] != t[i]) {
            swap(s[i], s[i + 1]);
            break;
        }
    }

    if (s == t)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
