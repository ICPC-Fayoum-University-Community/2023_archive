#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

#define ll          long long
#define lp(n)       for(ll i = 0; i < (n); ++i)
#define lp1(n)      for(ll i = 1; i <= (n); ++i)
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
 * you are given n * m rectangle to be filled with a*a squares ..
 * you can ddivide n / a and * it with m / a to get the exact number of swaures that fit in there
 *      but in the statement he says that you can cover the surface of a rectangle with one large square
 *      that goes outside the edges if needed .. so you need this formula but with ciel up to cover it all
 *  Note :
 *  use doubles to avoid integer division or type cast your variables
 *  when using doubles .. use FIXED to avoid scientific notations
 */

int main() {
    double n, m, a;
    cin >> n >> m >> a;

    cout << fixed << setprecision(0);
    cout << ceil(n / a) * ceil(m / a);

    // ------ another approach -----------
    long long len = n / a, wed = m / a;

/*
    if ((len * a) != n)
        len++;
    if ((wed * a) != m)
        wed++;
    cout << len * wed;
*/

    return 0;
}
