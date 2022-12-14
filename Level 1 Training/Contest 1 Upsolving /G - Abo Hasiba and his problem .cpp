#include <iostream>
using namespace std;


/*

x must be greater than or equal to n cause we can't divide a number by a bigger number 
as we want to divide x into n strictly positive integers
so the output is -1


----------------------------------- modulus solution -----------------------------------------


let x=8,n=4 --->  x is divisible by n
modulus = 0
we will make  n - modulus (4-0) numbers equal to x/n 
and modulus (0) number equal to x/n+1
output ---> 2 2 2 2

let x=7,n=4 --->  x is not divisible by n
modulus = 3 
we will make n - modulus (4-3) numbers equal to x/n
and modulus (3) numbers equal to x/n+1
output ---> 1 2 2 2

*/



int main() {
    int t;
    cin >> t;

    while (t--) {

        int x, n;
        cin >> x >> n;

        if (n > x)
            cout << -1;
        else {
                for (int i = 0; i < n - x % n; i++)
                    cout << x/n << " ";

                for (int i = 0; i < x % n; i++)
                    cout << x/n+1 << " ";
        }

        cout << "\n";
    }

    return 0;
}

/*
    
------------------------------------------ General solution ------------------------------------------

the idea of modulus solution works here but without our involvement.
we say that the number is equal to x/n then we subtract x/n from x and decrement n
we repeat These operations until n = 0

let x=7,n=4 --->  x is not divisible by n
modulus = 3
after n - modulus (4-3) repetitions of General solution x will become divisible by n
 
x/n = 1  x = 6  n = 3
x/n = 2  x = 4  n = 2
x/n = 2  x = 2  n = 1
x/n = 2  x = 0  n = 0

output ---> 1 2 2 2


*/


int main() {
    int t;
    cin >> t;

   while (t--) {

        int x,n;
        cin >> x>> n;

        if (n > x)
            cout << -1;
        else {

            while (n) {
                int y = x / n;
                cout << y << " ";
                x -= y, --n;
            }

        }

        cout << "\n";
    }

    return 0;
}
