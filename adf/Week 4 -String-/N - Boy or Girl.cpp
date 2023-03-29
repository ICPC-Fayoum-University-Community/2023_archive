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
 * A nice trick here is ti use a frequency array
 * just create an empty array denoting the state of a char if found or not
 * at first the whole array is set to false
 *
 * then just iterate on the array and mark arr[current char] to be true
 * then just count how many true values are there in your array this is the count of
 * distinct characters in the string
 */

int main() {
    string s;
    cin >> s;

    bool arr[123] = {false};
    int n = s.size();
    for (int i = 0; i < n; ++i) {
        arr[s[i]] = true;
    }

    int cnt = 0;
    for (int i = 'a'; i <= 'z'; ++i) {
        if (arr[i]) ++cnt;
    }

    // if the count is odd then he is a man
    if (cnt % 2)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";

    return 0;
}
