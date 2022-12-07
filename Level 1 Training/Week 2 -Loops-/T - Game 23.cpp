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
 * we want to go from n -> m by only multiplying by 2 or 3
 * then .. you need to reach the point that n == m using some (possibly none) operations from each
 * so .. the total number of operations is actually x + y where 2^x . 3^y denotes the used operations
 * if at some point .. m % n != 0 .. this means that we will not reach m using any operation on n
 */

int main() {

    int n, m;
    cin >> n >> m;

    int cnt = 0;
    // the loop keeps working until we reach a point where n == m or n > m
    while (n < m) {
        // if we can multiply n by 2 and m % m holds .. then it is a valid operation
        if (m % (n * 2) == 0) n *= 2, ++cnt;
            // else if we can multiply n by 3 and m % m holds .. then it is a valid operation
        else if (m % (n * 3) == 0) n *= 3, ++cnt;
            // if none of the above operations is valid then it is impossible to reach m from n
            // so break and see if n is equal m now or print -1
        else
            break;
    }
    if (n == m) cout << cnt;
    else cout << -1;

    return 0;
}
