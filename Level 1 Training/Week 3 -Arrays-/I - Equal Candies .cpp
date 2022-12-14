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
 * you want to distribute even candies to each friend
 *
 * the only operation you have is to eat(decrease) the amount of candies in each box
 * so .. observe that we need to make all elements of the array to be == the minimum element in it
 *
 * simply .. sort the array and loop on it summing the difference between the current box and the least one
 * which is located at index 0 after sorting
 *
 */


int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        long long eaten = 0;
        for (int i = 1; i < n; ++i) {
            eaten += arr[i] - arr[0];
        }

        cout << eaten << endl;
    }

    return 0;
}
