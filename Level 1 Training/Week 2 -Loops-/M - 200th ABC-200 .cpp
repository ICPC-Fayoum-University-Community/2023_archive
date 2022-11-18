#include <iostream>
using namespace std ;
/*                            200th ABC-200
 * at first we need to in declare two long long variables one of them to take the number (N), and the other one for number of operations (K).
 * get the number (N) and the number of operations (K).
 * we can implement any type of loops ( while , for , do while ) for the following operation.
 * make a condition for the loop from one to the number of operations ( 1 : (K) ).
 * in the body of the loop if the number is multiple for 200 we will divide it by 200 , else we will multiply it by 1000 then add 200 to it .
 * at the end of this prosses we should have the final value of (N).
 * Prepared By: Ahmed Mohsen (group 8).
 */
int main() {
  long long N , K;
   cin >> N >> K ;
     for (int i = 1; i <= K ; ++i) {
     if ((N/200)*200 == N )
         N/=200;
     else {
         N *= 1000;
         N += 200;
     }
     }
    cout << N;
}
