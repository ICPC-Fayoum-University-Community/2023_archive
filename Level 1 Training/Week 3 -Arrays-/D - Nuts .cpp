#include <iostream>
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
 * each number in the input represents number of nuts in a tree
 * just see if the number of nuts is greater than 10 take Ai - 10 nuts
 * else just take nothing;
 */

int main() {
    int n;
    cin >> n;

    int ans = 0;
    for (int i = 0; i < n; ++i) {
        int nuts;
        cin >> nuts;

        if (nuts > 10) ans += nuts - 10;
    }

    cout << ans;

    return 0;
}
