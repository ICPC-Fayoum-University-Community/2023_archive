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
 * A permutation is an array consisting of numbers from 1 to N (1,2,3,..,N)
 * so .. we can sort the array and check if each number from 1 to N exist
 *
 * and without sorting .. we should loop on nums from one to n and check if each exist (dependently)
 */


int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    sort(arr, arr + n); // 3 1 2 4 5 --> 1 2 3 4 5

    bool is_permutation = true;
    // one loop from one to n .. if the element at index i nit equal i then it is not a permutation
    for (int i = 0; i < n; ++i) {
        if (arr[i] != i + 1) // comparing with i + 1 due to zero based
            is_permutation = false;
    }

    if (is_permutation)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
