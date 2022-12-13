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
 * the trick here is to know when to make an operation and when not ..
 * in one operation you can increase the given number to x using c coins
 * if the difference you get when using this operation is less than the cost ..
 * then .. you are badly affecting your summation answer.
 *
 * otherwise .. use the operation if the difference you will get is greater than or equal the coins spent from the whole summation
 */

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x, c;
        cin >> n >> x >> c;

        int sum = 0;
        int cs = 0;

        for (int i = 0; i < n; ++i) {
            int a;
            cin >> a;
            int dif = x - a;

            if (dif > c)
                sum += x, cs += c;
            else {
                sum += a;
            }
        }
        cout << sum - cs << endl;

    }
    return 0;
}
