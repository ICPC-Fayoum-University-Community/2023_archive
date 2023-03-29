#include <bits/stdc++.h>
using namespace std;

#define ll          long long
#define lp1(n)      for(ll i = 1; i <= (n); ++i)
#define lp(n)       for(ll i = 0; i < (n); ++i)
#define tc          ll testcase;   cin>>testcase;   while(testcase--)
#define all(v)      (v).begin(), (v).end()
#define allr(v)     (v).rbegin(), (v).rend()
#define pb          push_back
#define yes         cout<<"yes"<<endl
#define no          cout<<"no"<<endl
#define endl        "\n"
#define improve     ios_base::sync_with_stdio(false); cin.tie(null); cout.tie(null)
int dx[4]{-1, 0, 1, 0};
int dy[4]{0, 1, 0, -1};

/* 3ein39
                    " وَأَن لَّيْسَ لِلْإِنسَانِ إِلَّا مَا سَعَى ﴿39﴾ وَأَنَّ سَعْيَهُ سَوْفَ يُرَى ﴿40﴾ ثُمَّ يُجْزَاهُ الْجَزَاء الْأَوْفَى "
                                      my way to my dream....
*/

/*
 * The problem statement is clear .. count the minimum number of steps required to print the string
 * given that you start at letter a ..
 *
 * we know that 'a' as ascii is 97 .. so why not to decrease any letter by 97 to have a more easy solution
 * to be traced easily..
 *
 * wheel_ptr = 0; --> initially we are at letter 'a' that is at position 0 we supposed
 *
 * in each iteration we have only two choices either to go clockwise / anti-clockwise ..
 * depending on how far the target character we want to go to ..
 *
 * let's take the first test case as an example
 *
 * string s = "azeus";
 * we are at a initially so 'a' - 'a' is 0 .. so the current sum is still 0;
 *
 * to print 'z' we have 2 choices .. iterate over the whole weel in 25 steps
 * or go to the left one step..
 *
 * observe that .. to get the number of steps from 2 characters we take the absolute difference
 * if this difference is greater than half of the alphabet length .. then for sure we should go the other way
 * to get less number of steps
 *
 * so in each loop .. we either count the steps to the summation if it is less than 13
 * meaning that it makes sense because going the other way will be 26 - this steps
 *
 * otherwise, we take 26 - steps to the summation.
 *
 * |'a' - 'z'| is 25 .. so we can go clockwise for 25 steps
 * or go anticlockwise for 26 - 25 --> 1 step..
 *
 * similarly repeat this process for each character in the string
 *
 * take the minimum among them in each loop and update the current wheel_ptr to your target char.
 */

int main() {
    string s;
    cin >> s;

    int wheel_ptr = 0;
    long long sum = 0;

    for (int i = 0; i < s.size(); ++i) {
        int target = s[i] - 'a';
        int steps = abs(wheel_ptr - target);

        sum += min(steps, 26 - steps);

        wheel_ptr = target;
    }

    cout << sum;

    return 0;
}
