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
 * Implementation problem ..
 * The first line of input is n .. which is the number of words for the desired outcome string
 * then n words
 * then m indicating the number of key press
 * then a string representing each press
 *
 * observe that .. you need to simulate here the use of a normal keyboard
 * and to handle each case that he mentioned in the problem statement
 *
 * if he pressed "Space" just add space to the end .. easy
 *
 * if he pressed "CapsLock" make a bool that says that capslock is pressed
 *      Note: if he pressed "CapsLock" twice .. then capslock now is not pressed . handle it
 *
 * if he pressed "Backspace" delete the last character
 *      Note: if the string is empty do nothing
 *
 * Otherwise, the input is just a normal lowercase letter
 * so, append it to the string after checking if capslock is on or not
 */

int main() {
    int n;
    cin >> n;

    string given;

    // Write it every time you use getline
    cin.ignore();

    getline(cin, given);

    string constructed = "";

    // the initial state of a capslock is not pressed
    bool isCapsLock = false;
    int m;
    cin >> m;

    while (m--) {
        // the string representing the current key pressed
        string operation;
        cin >> operation;

        // if isCapsLock is already true so now it will be false, and vice versa
        if (operation == "CapsLock")
            isCapsLock ? isCapsLock = false : isCapsLock = true;
        else if (operation == "Space")
            constructed.append(" ");
        else if (operation == "Backspace") { if (!constructed.empty()) constructed.pop_back(); }
        else {
            // if capslock is true then you push the letter upper cased
                if (isCapsLock) operation = toupper(operation[0]);
                constructed.append(operation);
            }
    }
    constructed == given ? cout << "Correct" : cout << "Incorrect";
return 0;
}