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
 * u r given 4 integers representing the amount of calories burnt at this strip
 * so imagine we have an array of length 5
 *
 * 0  1  2  3  4
 * 0 a1 a2 a3 a4
 *
 * and string s representing strips one by one ..
 * then we can say that the total burnt calories is the summation of all strips present in the string
 *
 * for each strip in s .. increase total sum by arr[ai] .. where ai is the character of the strip
 * but we say ai - '0' or 48 t convert it to int to be used as an index for the array
 */


int main() {
    int n = 4 + 1;
    int arr[n];

    arr[0] = 0;
    for (int i = 1; i < n; ++i) {
        cin >> arr[i];
    }

    string s;
    cin >> s;

    ll sum = 0;
    for (int i = 0; i < s.size(); ++i) {
        sum += arr[s[i] - '0'];
    }

    cout << sum;
    return 0;
}
