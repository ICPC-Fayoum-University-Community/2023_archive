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
 * Your task is to print the minimum possible integer after an operation
 * the operation is as follows, you can convert any digit t to 9 - t
 * ex.  8 --> 9 - 8 = 1
 *      5 --> 9 - 5 = 4
 * so, if u want to minimize the number .. iterate on each digit and see
 * if 9 - t is less than t ..
 *
 * Observe that .. 9 is an edge case
 * because if s = 9 then by doing our algorithm the output will be zero
 * which is not a positive number so gives us an wrong answer
 *
 * we should handle it explicitly .. if I am at index 0 -the start of my number- and the digit is 9
 * DO NOT CONVERT IT .. as this will give you a leading zero
 */

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); ++i) {
        int digit = s[i] - '0';
        int operation = 9 - digit;

        if (digit == 9 && i == 0)
            cout << 9;
        else if (operation < digit)
            cout << operation;
        else
            cout << digit;
    }

    return 0;
}
