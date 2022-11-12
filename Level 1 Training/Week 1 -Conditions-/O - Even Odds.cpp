#include <iostream>

using namespace std;

/*
 * we have a number n which represents the length of sequence then first write all odd numbers in ascending order
 *          then add even numbers in ascending order
 * so ..  seq. of length 5 would be --> 1 3 5 2 4
 *
 * we are also given k which represents the k-th element in the seq 
 *      for ex the 4th el. in the seq --> 2
 *
 * to solve we need first to observe that ...
 *      if n is even .. we have an equal number of elements of odd and even in the seq
 * else we have (n/2 + 1) odd numbers and (n/2) even numbers ..
 *
 * for ex. n == 4 (1 3 2 4) so numOfOdd == numOfEven
 *         n == 5 (1 3 5 2 4) so numOfOdd == 1 + numOfEven
 *
 *  another observation is to get an even num in i-th pos where i between (0,inf) (2*i)
 *  and to get an odd num in i-th pos where i between (0,inf) (2*i + 1)
 *
 *  for ex. the first three even numbers is (2 * 0), (2 * 1), (2 * 2) ->>> (0,2,4)
 *          the first three odd numbers is (2 * 0 + 1), (2 * 1 + 1), (2 * 2 + 1) ->>> (1,3,5)
 *
 *  so one way to solve this Q is
 *
 *  first i will decrease k by one to work on this 0-based formula
 *  then check if n is even
 *      if k < n/2 than it will be in odd range and to get the answer just output (2*k + 1)
 *      else it will be in even range and to get the answer we need to subtract the whole odd range (k - (n/2 - 1))
 *      then output 2*k
 * else
 *      if k <= n/2 then it will be in odd range and to get the answer just ouput (2*k + 1)
 *      else it will be in even range and to get the answer first we need to subtract the whole odd range ( k - (n/2))
 *      then output 2*k
 *
 */

int main(){

    long long n,k;
    cin >> n >> k;
    k--;
    
    if (n % 2 == 0) {
        if (k < n/2)
            cout << 2*k + 1;
        else {
            k -= (n/2 - 1);
            cout << 2*k;
        }
    }
    else {
        if (k <= n/2)
            cout << 2*k + 1;
        else {
             k -= n/2;
             cout << 2*k;
        }
    }

}
