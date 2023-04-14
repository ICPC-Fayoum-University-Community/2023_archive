#include <bits/stdc++.h>

using namespace std;
/*
//                                             * Problem 10 solution *                                      \\
Let's first take a look at the problem statement.
We are told that the sum of the numbers on the opposite faces of each die is seven (7).

Given the top face of each of the three dice, we know that the sum of the numbers on the opposite faces is seven (7),
which means that the bottom face of each die will be equal to 7 minus the value of its top face.

To solve this problem, we need to define three variables of type "int", let's call them a, b, and c, to represent the values of the top faces.
Then, we need another int variable with an initial value of 0 to collect the values of the bottom faces by applying the aforementioned operation to each top face.

At this point, we will have the answer in the sum variable, so we can print it.

                                          try to code it in your own :)                                         */
int main() {
  int a , b , c ;
  cin >> a >> b >> c ;
  
  int sum = 0 ;
  sum += (7-a);
  sum += (7-b);
  sum += (7-c);        // note that we can write the previous three lines like that: sum += (7-a)+(7-b)+(7-c);

  cout << sum ;
                    // we also can get red of the sum variable by printing this line (7-a)+(7-b)+(7-c): cout << (7-a)+(7-b)+(7-c);
}
