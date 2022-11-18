#include <iostream>
using namespace std ;
/*                             Algae
 * at first we need to in declare three integer variables one of them to take the value of (r), and the second one for value of (d) , and the last one for the value of (x).
 * get the numbers (r) , (d) and (x).
 * we can implement any type of loops ( while , for , do while ) for the following operation.
 * make a condition for the loop from one to the number of operations ( 1 : 10 ).
 * in the body of the loop we will update the value of (x) by the given formula xi+1 = (r*xi)-d .
 * and now print the current value of x at the end of the finished iteration in a sengel line.
 * Prepared By: Ahmed Mohsen (group 8).
 */
int main() {
int r , d , x ;
cin >> r >> d >> x ;
for (int i = 1 ; i<=10 ; i++) {
    x = (r*x)-d ;
    cout << x << endl;
}
}
