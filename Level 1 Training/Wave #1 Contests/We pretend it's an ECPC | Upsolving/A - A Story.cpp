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
 * A permutation is an array consisting of the numbers [1, 2, 3, ..., n] only
 * without any duplicates
 * for example [1] , [2, 3, 5, 4, 1] are permutations
 *
 * You're given n and n - 1 numbers your task is to find the missing number of this array
 * since it is a permutation ..
 * so the missing one can be calculated with a simple math equation
 * (n(n + 1) / 2) - the sum of n - 1 elements --->> the missing element from one to n
 * ^
 * |
 *  - - - This is the equation to get sum of numbers from 1 to n inclusive
 */

int main() {
    ll n;
    cin >> n;

    ll sum = 0;
    for (int i = 0; i < n - 1; ++i) {
        ll num;
        cin >> num;

        sum += num;
    }

    cout << (n*(n+1)/2) - sum;
}