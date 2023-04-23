#include <iostream>
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
 * the problem note explains what is factorial
 * so simply iterate from 1 to n and multiply each number -i- in there to get factorial of n
 *
 * Note:
 *  factorial of 20 is ~ 2.432902e+18 .. so use long long to avoid overflows
 *  you can loop from n to 1 also .. as you like
 */

int main() {
    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;
        long long fact = 1; // must be = 1 .. you're multiplying it each iteration

        for (int i = 1; i <= n; ++i)
            fact = fact * i;

        cout << fact << endl;
    }
    return 0;
}
