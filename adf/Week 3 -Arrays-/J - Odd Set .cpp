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
 * observe that ..
 * to have pairs with odd sum .. then there must be one odd number in each pair
 * as even + odd = odd number
 *
 * then .. you have 2n numbers .. if n of them is odd .. then you can have
 * n pairs each with 1 odd and 1 even
 *
 * then .. simply count the number of odds in your array ..
 *      if == n .. then it can be split into exactly n pairs
 */


int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n*2];
        int odd_cnt = 0;
        for (int i = 0; i < n * 2; ++i) {
            cin >> arr[i];

            odd_cnt += arr[i] %2;
        }

        bool is_valid = odd_cnt == n;

        if (is_valid)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}
