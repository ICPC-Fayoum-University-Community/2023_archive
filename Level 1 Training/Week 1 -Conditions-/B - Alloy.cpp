#include <iostream>


using namespace std;

int main() {
    int a, b   ;
    cin >> a >>  b ;

    if ( a >  0 && b > 0)
        cout<< "Alloy" ;
    else if (b > 0)
        cout << "Silver" ;
    else
        cout << "Gold" ;

}
