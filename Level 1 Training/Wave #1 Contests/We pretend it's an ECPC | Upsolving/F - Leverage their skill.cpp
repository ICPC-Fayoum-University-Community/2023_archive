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
 * To say that a divides b .. so b % a == 0
 * therefor .. a must be less than b ..
 *
 * so the only possible case to find a number that divides all the array
 * is that it is the minimum among them ..
 *
 * you can simply sort the array and iterate over all elements
 * if arr[i] % arr[0] == 0
 * means if current element is divisible by the smallest element that we are currently testing
 * count it
 *
 * afterwards .. if that count is == n then all elements of the array are divisible by arr[0]
 * otherwise it is impossible to find such a number, and we print -1
 */

int main() {
    ll n;
    cin >> n;

    ll arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    ll cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] % arr[0] == 0)
            cnt++;
    }

    if (cnt == n)
        cout << arr[0];
    else
        cout << -1;
}
