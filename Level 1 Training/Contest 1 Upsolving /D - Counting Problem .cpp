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
 * observe that ..
 * oddsum * oddsum == odd number
 *
 * therefore .. each subsequence must have odd number of odd numbers
 * ex. 1 1 2 2
 *
 * having even numbers of odds means that we can split it into to odd values
 * i.e [1] [1 2 2]
 *  3 5 -->  [3] [5]
 *  1 2 4 8 10 3 ---> [1] [2 4 8 10 3]
 *
 *  observe that with having odd number of odds in each subsequence that summation in each one is odd
 *
 *  therefore .. if we found even number of values in our input .. the answer is yes
 */

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int odds = 0;
        for (int i = 0; i < n; ++i) {
            int number;
            cin >> number;

            odds += number % 2;
        }

        if (odds % 2 == 0 && odds)
            cout  << "YES\n";
        else
            cout << "NO\n";
    }


    return 0;
}
