#include <iostream>
using namespace std ;
/*                             Bear and Big Brother
 * at first we need to in declare three integer variables one of them for Limka whight (a) , and the second one for wight of (Bob) , and the third one will be an counter and will be intialized by 0 .
 * get the numbers (a) and (b).
 * we can implement any type of loops ( while , for , do while ) for the following operation.
 * make a condition for the loop while (a) isn't greater than (b) (a <= b).
 * in the body of the loop we will multiply (a) by 3 , (b) by 2 and we will increase the counter by one . 
 * at the end of the loop print the final number of iterations.
 * Prepared By: Ahmed Mohsen (group 8).
 */
 int main()
{
    int a , b , c=0;
    cin >> a >> b ;
    while( a <= b )
    {
        a*=3;
        b*=2;
        c++;
    }
    cout<<c;

}
