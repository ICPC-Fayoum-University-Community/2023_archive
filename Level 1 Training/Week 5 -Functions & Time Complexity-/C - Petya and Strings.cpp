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
 * Observe that .. lexicographical order is the order of dictionaries
 * and strings by default allow us to use compare operators and they
 * compare according to this order.
 *
 * the trick here is in this sentence:
 * The letters' case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter.
 *
 * So, you need first to convert all the to string ti upper/lower case then perform the comparison
 */

int main() {
    string a, b;
    cin >> a >> b;

    // iterating on each element by reference and convert it to lower case
    for (auto& el : a) el = tolower(el);
    for (auto& el : b) el = tolower(el);

    // operators are overloaded to compare lexicographically
    if (a < b)
        cout << -1;
    else if (a > b)
        cout << 1;
    else cout << 0;
}
