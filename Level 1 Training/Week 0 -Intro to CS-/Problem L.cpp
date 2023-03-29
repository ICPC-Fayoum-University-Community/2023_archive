#include <iostream>
using namespace std;
int main()
{
    int H, W , h , w;
    cin >> H >> W >> h >> w;
    int row = H - h;
    int col = W - w;
    cout << row * col;


    return 0;
}