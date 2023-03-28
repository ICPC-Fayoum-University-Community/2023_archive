#include <bits/stdc++.h>

using namespace std;

#define ll          long long
#define lp(n)       for(ll i = 0; i < (n); ++i)
#define lp1(n)      for(ll i = 1; i <= (n); ++i)
#define tc          ll testcase;   cin>>testcase;   while(testcase--)
#define all(v)      (v).begin(), (v).end()
#define allr(v)     (v).rbegin(), (v).rend()
//#define fi          first
//#define se          second
#define pb          push_back
#define yes         cout<<"YES"<<endl
#define no          cout<<"NO"<<endl
#define improve     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define Node        ListNode
int dx[4]{-1, 0, 1, 0};
int dy[4]{0, 1, 0, -1};
const int OO = 10000000;

/* 3ein39
                    " وَأَن لَّيْسَ لِلْإِنسَانِ إِلَّا مَا سَعَى ﴿39﴾ وَأَنَّ سَعْيَهُ سَوْفَ يُرَى ﴿40﴾ ثُمَّ يُجْزَاهُ الْجَزَاء الْأَوْفَى "
                                      My way to My dream....
*/

void hussein() {
    improve;
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
}

/*
 * There are several approaches to solve this problem
 * one of them is by observing the order in which the input is given
 *  1  2  3 --> 3  1  2
 *  41 59 31 -> 31 41 59
 *
 * observe, let the input order be 1 2 3 then the output order is 3 1 2
 * as simple as cin a, b, c then print c, a, b
 *
 * The second approach is to do the swapping operation
 * first swap a with b then swap a with c
 * for simplicity use 3rd var. -temp-
 * store a in temp then let a = b, b = temp
 * do the same operation with a and c
 */

int main() {
    hussein();

    int a, b, c;
    cin >> a >> b >> c;

    // first approach
    cout << c << " " << a << " " << b;

    // second approach
    int temp;
    temp = a;
    a = b;
    b = temp;

    temp = a;
    a = c;
    c = temp;

    cout << a << " " << b << " " << c;


//    swap(a, b);
//    swap(a, c);
//    cout << a << " " << b << " " << c;

    return 0;
}
