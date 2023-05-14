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
 * u r given a string s and char c ..
 * ur task is to find whether you can obtain char c from s by the following operation
 * u choose any two adjacent characters and delete them
 *
 * observe that .. the string length is always odd ..
 * so, let's elaborate on this test case
 *          a b c d e
 *          0 1 2 3 4
 *   c = 'c' .. since 'c' is in position 2
 *   it has even number of chars to left and to right
 *   so, we can delete them and obtain 'c'
 *
 *          c o n t e s t
 *          0 1 2 3 4 5 6
 *   c = 't' .. here we have two chars of 't'
 *   if we choosed the one in the middle at position 3 ..
 *   then we can obtain 't' again
 *
 * observe that ...
 * when letter c exists in an even position in string s
 * then there must be a way to get char c out of this string
 * by removing letters to the left and to the right as they will be even pairs
 */

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        char c;
        cin >> s >> c;

        // at first, we assume that our string cannot be converted to char c
        bool convertable = false;
        int n = s.size();
        for (int i = 0; i < n; ++i) {
            // once i found a char that is == c and in even position
            // then this string is convertible to c
            if ((s[i] == c) && (i % 2 == 0))
                convertable = true;
        }

        convertable ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}
