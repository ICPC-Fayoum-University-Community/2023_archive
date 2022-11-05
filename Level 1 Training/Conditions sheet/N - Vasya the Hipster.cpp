#include <iostream>

using namespace std;

/*
 * we have (a) socks and (b) socks, and we need to pair them so
 * each pair have diffirent type of socks and the rest of socks remaine can be pairing togather with the same type
 *
 *
 * that can answered by tacking the min(a,b) out of them to make diffirent type of socks
 * ended up with one type be (0) and the other be (max(a,b) - min(a,b)) so divided it over 2 to make pair with the same type
 *
 * ex.
 *  5 10
 *  take the min out of them to make diffirent type of socks ->>> 5
 *
 *  subtract the max out of them by min and divide it by 2 to pair with the same type ->> (10 - 5 ) / 2 ->> 2
 *  so answer will be 5 2
 */

int main(){

    int a,b;
    cin>>a>>b;
    // min will be always (b) and max will be (a)
    if (b > a)
        swap(a,b);
    cout << b << " "<<(a - b) / 2;
}
