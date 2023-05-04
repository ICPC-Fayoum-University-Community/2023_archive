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


int main() {
	hussein();

	int t;
	cin >> t;

	while (t--) {
		int n, k;
		cin >> n >> k;
		int a[n], b[n];

		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

		for (int i = 0; i < n; ++i)
		{
			cin >> b[i];
		}

		sort(a, a + n);
		sort(b, b + n, greater<>());

		long long ans = 0;

		for (int i = 0; i < n; ++i)
		{
			if (i < k)
				ans += max(a[i], b[i]);
			else
				ans += a[i];
		}

		cout << ans << endl;
	}

    return 0;
}
