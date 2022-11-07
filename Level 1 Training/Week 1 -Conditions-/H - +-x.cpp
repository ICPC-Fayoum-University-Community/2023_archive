#include <iostream>


using namespace std;

int main() {
     int a ,b , mx = -100000 ;
      cin >> a >> b ;

        if ( (a + b) > mx)
          mx = (a+b) ;
        if ( (a - b) > mx)
        mx = (a-b) ;
        if ( (a * b) > mx)
           mx = (a*b) ;

            cout << mx ;
}
