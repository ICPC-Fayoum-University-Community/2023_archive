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
 * observe that .. the only case of -1 is if both strings are equal
 * so, there will be no uncommon subsequences between them at all
 *
 * but if they differ in size .. if we took the string with larger size
 * then, for sure it is not a subsequence of the other..
 *
 * make sense right? .. if a.size() is 5 and b.size() is 7
 * then b must be the longest uncommon subsequence
 */

int main() {
    string a, b;
    cin >> a >> b;

    if (a == b)
        cout << -1;
    else
        cout << max(a.size(), b.size());

    return 0;
}
