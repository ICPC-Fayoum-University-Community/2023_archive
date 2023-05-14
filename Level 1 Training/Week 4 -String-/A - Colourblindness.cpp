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
 * we can say that R and G is not our focus here because they are the same ..
 * once you found an R in one row and not R in the same position of the second row
 * then they must not be identical .. otherwise print yes
 */

int main() {
    int t;
    cin >> t;

    while (t--) {
        int r = 2, c;
        cin >> c;

        // Array of char to store the matrix
        char arr[r][c];
        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                cin >> arr[i][j];
            }
        }
        // Assume at first that they are identical and check
        bool identical = true;
        for (int i = 0; i < c; ++i) {
            // if at some position the two elements are not equal
            // and one of them is the R so they must not be identical rowa
            if ((arr[0][i] != arr[1][i])&& (arr[0][i] == 'R' || arr[1][i] == 'R'))
                identical = false;
        }
        identical ? cout << "YES\n" : cout << "NO\n";
    }
}
