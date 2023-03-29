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
 * Just check if the given string length is strictly larger than 10
 * strictly > means 10 exclusive .. any number > 10
 */

int main() {
    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;
        // s.size() - 1 is the index of the last character
        char first = s[0], last = s[s.size() - 1];
        int remaining_chars = s.size() - 2;

        if (s.size() > 10)
            cout << first << remaining_chars << last << "\n";
        else
            cout << s << "\n";
    }
}
