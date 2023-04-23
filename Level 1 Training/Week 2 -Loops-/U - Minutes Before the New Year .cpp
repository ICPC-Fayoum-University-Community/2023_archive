#include <iostream>
using namespace std ;
/*                              Minutes Before the New Year
 * at first we need to in declare four integer variables one of them to take the number of test cases (num) , and the second one for the number of hours (h) , and the third one for the nmber of minutes (m) , and the last one will be intialized by the number of minutes in the day (mod=1440) .
 * get the numbers (num).
 * we can implement any type of loops ( while , for , do while ) for the following operation.
 * make a condition for the loop from one to the number of test cases ( 1 : num ).
 * we will get the values (h) , (m).
 * and now print the difference between the total number of minutes in the day and the number of minutes that have been passed from the day in a sengel line.
 * Prepared By: Ahmed Mohsen (group 8).
 */
int main() {
int num , h , m;
int mod = 24*60 ;
 cin >> num  ;
for (int i = 1 ; i<=num ; i++) {
    cin>>h>>m;
     cout << mod-((h*60)+m) << endl;
}
}
