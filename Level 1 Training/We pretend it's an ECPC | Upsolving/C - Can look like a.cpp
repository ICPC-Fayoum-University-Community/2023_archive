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
 * A simple implementation problem ..
 * just check if n is even then n /= 2
 * otherwise n = n * 2 + 1
 *
 * ex.
 * at n = 3 --> 3 10 5 16 8 4 2 1
 *
 * Observe that using int will overflow
 * i.e. infinite loop as n will not be != 1 forever
 */

int main() {
    ll n;
    cin >> n;

    while (n != 1) {
        cout << n << " ";

        if (n % 2 == 0)
            n /= 2;
        else
            n = (n * 3) + 1;
    }
    // important because at n = 1 the loop is broken before printing 1
    cout << 1;
}
