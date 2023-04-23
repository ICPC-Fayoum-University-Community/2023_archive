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
 * we need to calculate the time for elevator a and elevator b to reach floor 1
 *  you can easily say that time needed be elevator a is |a - 1| ..
 *      and if elevator b is at position higher than c it will goes down to floor 1
 *      so also b time will be equal |b - 1| ..
*   but .. if second elevator will go up to c first .. then it will take c - 1 time + the time from b to c up .. which is (c - b)
 *   which is 2c - b - 1
 *
 *   so .. we now have the formulas to get time for each elevator .. just compare them ..
 */

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int first_time = a - 1, second_time;
        if (b > c) second_time = b - 1;
        else second_time = 2*c - b - 1;

        if (first_time == second_time) cout << 3;
        else if (first_time > second_time) cout << 2;
        else cout << 1;

        cout << endl;
    }
    return 0;
}
