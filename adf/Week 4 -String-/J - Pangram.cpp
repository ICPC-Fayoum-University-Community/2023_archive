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
 * A pangram string has all letters from a to z at least once in it
 * whether it is lower/upper case,
 * so, we can here use a frequency array ..
 * initialize the whole array to false indicating that this letter is not found
 *
 * then get char by char from the input and convert it to lower case for simplicity
 * then mark it as true i.e. found in the frequency array
 *
 * then loop from a to z on the frequency array once found that a char is set to false
 * this means that it is not found in the input string so it is not a pangram..
 */

int main() {
    int n;
    cin >> n;

    // each index represents a letter from a to z by his ascii number
    bool arr[123] = {false};
    while (n--) {
        char el;
        cin >> el;

        el = tolower(el); // to make it easier for you
        arr[el] = true;
    }

    // assume that the string is pangram and check your assumption
    bool is_pangram = true;
    for (int i = 'a'; i <= 'z'; ++i) {
        // once arr[i] is false then this condition will work and set is_pangram to false
        if (!arr[i])
            is_pangram = false;
    }

    is_pangram ? cout << "YES" : cout << "NO";
    return 0;
}
