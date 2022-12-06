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
 * since the range is small .. we can list down all the lucky numbers from 1 to 1000 .
 *  and then check if n is divisible by any of these
 */

int main() {

    int n;
    cin >> n;

    if (n%4==0 || n%7==0 || n%44==0|| n%47==0 || n%74==0 ||n%77==0
        || n%444==0 || n%447==0 || n%474==0 || n%744==0 || n%477==0 || n%747==0 || n%774==0 || n%777==0)
        cout << "YES";
    else
        cout << "NO";


    return 0;
}

/*
 * wonder if the given range is huge and you cannot just list them and solve this way ..
 *      then .. we can iterate from one to n and check if i is lucky then if it divides n
 */

int main1() {
    int n;
    cin >> n;

    // assuming at first that we do not have any lucky number that evenly divide our n
    bool found = false;

    // loop from one to n
    for (int i = 1; i <= n; ++i) {
        // we first need to check if the current i is lucky or not
        // i.e it consists of only 4 and 7

        // then simply check all the digits of i

        // we assume that num is lucky
        bool is_lucky = true;

        // then check if this assumption holds
        int num_to_check = i;
        while (num_to_check) {
            int digit = num_to_check % 10;
            num_to_check /= 10;

            // once found that a digit is not one of those then it is not a lucky number
            if (digit != 4 && digit != 7)
                is_lucky = false;
        }

        // then we say if that i is lucky and n is divisible by it ..  that our n is almost lucky
        // i.e divisible by some lucky number
        if (is_lucky && n % i == 0)
            found = true;
    }

    if (found)
        cout << "YES";
    else
        cout << "NO";
}
