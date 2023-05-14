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
 * easy problem that can be solved in many ways
 * just implement the rules given
 * if a char is vowel just skip it
 * else print dot followed be the char lower-cased
 */

int main() {
    string vowels = "AOYEUIaoyeui";

    string s;
    cin >> s;
    int n = s.size();

    for (int i = 0; i < n; ++i) {
        if (vowels.find(s[i]) != string::npos)
            continue;
        else {
            // casting to char bec. tolower returns an int representing the char in ascii
            cout << "." << (char)tolower(s[i]);
        }
    }

    return 0;
}
