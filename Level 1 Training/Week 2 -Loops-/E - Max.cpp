#include <iostream>
using namespace std;

#define ll          long long
#define lp(n)       for(ll i = 0; i < (n); ++i)
#define lp1(n)      for(ll i = 1; i <= (n); ++i)
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
 * you are given n and then n numbers ..
 * just have a variable to store the maximum number found so far
 * in each iteration if your new number is greater than the current max
 *      UPDATE YOUR CURRENT MAX
 * and print the max after the loop ends
 */

int main() {
    int n;
    cin >> n;

    int max_num = 0;
    // iterating n times
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;

        if (num > max_num) max_num = num;
    }

    cout << max_num;
    return 0;
}
