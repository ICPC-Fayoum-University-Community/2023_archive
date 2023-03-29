#include <iostream>
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
 * just get the distance between the point located at 1 ... and the point at the middle
 * in your loop .. once 1 is found save its position
 * since the matrix is always 5 * 5 .. then its middle is at point (3, 3)
 * just get the absolute difference to get the minimum distance to go there
 */

int main() {
    int r = 5, c = 5;
    int x1 = 3, y1 = 3; // the middle of the matrix;

    int mat[r][c], x2, y2;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> mat[i][j];

            if (mat[i][j] == 1)
                x2 = i + 1, y2 = j + 1; // because the matrix here is zero based ..
        }
    }

    cout << abs(x1 - x2) + abs(y1 - y2);

    return 0;
}
