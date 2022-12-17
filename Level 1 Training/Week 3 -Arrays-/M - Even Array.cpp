#include <iostream>
#include <cmath>
#include <algorithm>

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
 * observe that .. to have a valid good array .. you need to swap elements that differ in party with its index
 * for example .. if at i = 0, arr[i] is odd .. then you need to swap it to have a good array
 *
 * observe that you need to swap it with an element which is even in this case to make it good
 *
 * so .. if you have equal numbers of elements that needs to be swapped even and odd .. you have an answer
 * equal to any one of them ..
 *
 * 0 1 2 3
 * 3 2 7 6
 * x x x x
 *
 * elements marked with x needs to be swapped .. so swap each odd with each even
 * 0 1 2 3
 * 6 7 2 3
 * in 2 swaps we obtained a good array ..
 */

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; ++i)
            cin >> arr[i];

        // the count of each to solve the problem
        int odd_to_swap = 0, even_to_swap = 0;

        for (int i = 0; i < n; ++i) {
            // at even index .. increase cnt if arr[i] is odd
            if (i % 2 == 0) even_to_swap += arr[i] % 2;

            // at odd index .. increase cnt if arr[i] is even
            if (i % 2 != 0) odd_to_swap += !(arr[i] % 2);
        }

        // once they are equal .. print any ot them || -1
        if (even_to_swap == odd_to_swap) cout << even_to_swap << endl;
        else  cout << -1 << endl;
    }

    return 0;
}
