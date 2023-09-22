#include<bits/stdc++.h>
using namespace std;
int a[205][205]{};
int X, Y;
int diagonals(int x, int y)
{
    int ans = 0;
    int i = x, j = y;
    while (i >= 0 && j >= 0 && j < Y)
    {
        ans += a[i][j];
        --i;
        ++j;
    }
    i = x, j = y;
    while (i >= 0 && j >= 0)
    {
        ans += a[i][j];
        --i;
        --j;
    }
    i = x, j = y;
    while (i >= 0 && i < X && j >= 0 && j < Y)
    {
        ans += a[i][j];
        ++i;
        ++j;
    }
    i = x, j = y;
    while (i >= 0 && i < X && j >= 0)
    {
        ans += a[i][j];
        ++i;
        --j;
    }
    ans -= a[x][y] * 3;
    return ans;
}

int main()
{

    int t; cin >> t; while (t--)
    {
        int x, y, temp, ans = 0; cin >> X >> Y;
        for (int i = 0; i < X; ++i)
        {
            for (int j = 0; j < Y; ++j)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < X; ++i)
        {
            for (int j = 0; j < Y; ++j)
            {
                ans = max(ans, diagonals(i, j));
            }
        }
        cout << ans;
        cout << (t ? '\n' : ' ');
    }
}