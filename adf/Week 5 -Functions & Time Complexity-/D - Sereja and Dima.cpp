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
 * That's a well known algorithm .. to be explained later in a more formal way
 * but here you just write a code to act greedy ..
 * in each iteration the current player chooses the max possible number of the both sides
 *
 * so, we can keep track of the current left and current right .. and whether one is taken we update the index of it
 * until the end of the array..
 *
 * this problem may seem a little hard for now but you need to get ur hands dirty
 */

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // storing the sum of both
    ll sereja_sum = 0, dima_sum = 0;

    // l, r stands for the current cards we will compare
    // initially we have the cards at positions 0, n - 1
    int l = 0, r = n - 1;

    for (int i = 0; i < n; ++i) {
        // in each iteration we update either the left/right most card
        int left_num = arr[l], right_num = arr[r];

        // let sereja take turns at even iterations of the game
        if (i % 2 == 0) {
            // just pick the max number and update the idx to the next one
            if (left_num > right_num) {
                sereja_sum += left_num;
                ++l;
            }
            else {
                sereja_sum += right_num;
                --r;
            }
        }
            // Dima's turns
        else {
            // also takes the max and updates the idx
            if (left_num > right_num) {
                dima_sum += left_num;
                ++l;
            }
            else {
                dima_sum += right_num;
                --r;
            }
        }
    }

    cout << sereja_sum << " " << dima_sum;

    return 0;
}
