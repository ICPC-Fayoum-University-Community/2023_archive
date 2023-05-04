#include <bits/stdc++.h>

using namespace std;

#define ll          long long
#define lp(n)       for(ll i = 0; i < (n); ++i)
#define lp1(n)      for(ll i = 1; i <= (n); ++i)
#define tc          ll testcase;   cin>>testcase;   while(testcase--)
#define all(v)      (v).begin(), (v).end()
#define allr(v)     (v).rbegin(), (v).rend()
//#define fi          first
//#define se          second
#define pb          push_back
#define yes         cout<<"YES"<<endl
#define no          cout<<"NO"<<endl
#define improve     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define Node        ListNode
int dx[4]{-1, 0, 1, 0};
int dy[4]{0, 1, 0, -1};

/* 3ein39
                    " وَأَن لَّيْسَ لِلْإِنسَانِ إِلَّا مَا سَعَى ﴿39﴾ وَأَنَّ سَعْيَهُ سَوْفَ يُرَى ﴿40﴾ ثُمَّ يُجْزَاهُ الْجَزَاء الْأَوْفَى "
                                      My way to My dream....
*/

void hussein() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
}

/*
 * you will be given n numbers Ai represents the score of the i-th person ..
 * and k for the minimum score needed to pass to the next round ..
 * your task is to calculate how many will proceed to the next round ..
 *      simply .. iterate on all nums and calc the ans
 *
 * Note:
 * the given k is one based .. sp if k == 1 this meas that we are talking about the score at position 0 in array
 */

int main() {
    hussein();

    int n, k;
    cin >> n >> k;

    int arr[n];

    int ans = 0;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    for (int i = 0; i < n; ++i) {
        // k - 1 --> to hande the 0 based array ..
        // arr[i] != 0 --> to calc only positive score . as said in problem statement
        if (arr[i] >= arr[k - 1] && arr[i] != 0) ans++;
    }

    cout << ans;

    return 0;
}
