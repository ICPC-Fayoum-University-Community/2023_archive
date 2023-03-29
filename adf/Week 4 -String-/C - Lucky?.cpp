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
 * Your task is to check if the sum of first 3 characters is equal the sum of the last 3
 * you can simply convert a '4' into 4 by just subtracting 48 from it
 * a simple ascii code trick .. '0' in ascii code is 48
 * so   '4' - 48 == 4
 * and  '4' - '0'== 4
 */

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int first3 = (s[0]-'0') + (s[1]-'0') + (s[2] - '0');
        int last3 = (s[3]-'0') + (s[4]-'0') + (s[5] - '0');

        first3 == last3 ? cout << "yes\n" : cout << "no\n";
    }
}
