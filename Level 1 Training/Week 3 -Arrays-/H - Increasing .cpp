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
 * from the statement .. just sort the array
 * if at any point you find any duplicates .. then the array is not strictly increasing
 * observe that sorting an array must give a strictly increasing array except if you have any duplicates
 *
 * 8 7 1 3 4    --> 1 3 4 7 8
 * 1 1 1 1      --> 1 1 1 1
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

        // observe that we need to loop till n - 1 only ..
        // because we are checking i and i + 1 .. to avoid any out of bounds problem
        bool is_increasing = true;
        for (int i = 0; i < n - 1; ++i) {
            if (arr[i] == arr[i + 1])
                is_increasing = false;
        }

        if (is_increasing)
            cout << "YES\n";
        else
            cout << "NO\n";
    }


    return 0;
}
