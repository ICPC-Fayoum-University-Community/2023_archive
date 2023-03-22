#include <bits/stdc++.h>
using namespace std;

#define ll          long long
#define lp1(n)      for(ll i = 1; i <= (n); ++i)
#define lp(n)       for(ll i = 0; i < (n); ++i)
#define tc          ll testcase;   cin>>testcase;   while(testcase--)
#define all(v)      (v).begin(), (v).end()
#define allr(v)     (v).rbegin(), (v).rend()
#define pb          push_back
#define yes         cout<<"YES"<<endl
#define no          cout<<"NO"<<endl
#define endl        "\n"
#define improve     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
int dx[4]{-1, 0, 1, 0};
int dy[4]{0, 1, 0, -1};

/* 3ein39
                    " وَأَن لَّيْسَ لِلْإِنسَانِ إِلَّا مَا سَعَى ﴿39﴾ وَأَنَّ سَعْيَهُ سَوْفَ يُرَى ﴿40﴾ ثُمَّ يُجْزَاهُ الْجَزَاء الْأَوْفَى "
                                      My way to My dream....
*/

/*
 * Doaa likes numbers 9, 3, 2
 * so she considers a number lucky if its last digit is one of those
 *
 * you're given two numbers l, r .. your task is to count the number of lucky numbers included between them
 * Be careful .. In the problem statement he said inclusive i.e. l and r are both to be checked
 *
 * just a for loop from l to r to get the full range and check if it is lucky or not
 */

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll l, r;
        cin >> l >> r;

        ll cnt = 0;
        // because he said inclusive
        for (int i = l; i <= r; ++i) {
            int last_digit = i % 10;

            if (last_digit == 9 || last_digit == 3 || last_digit == 2)
                cnt++;
        }

        cout << cnt << "\n";
    }
}
