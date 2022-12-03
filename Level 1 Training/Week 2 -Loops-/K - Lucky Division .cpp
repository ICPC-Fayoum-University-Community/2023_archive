#include <iostream>
using namespace std;
/*
            -Lucky Division-
Firstly iterate from 1 to 1000 (rang of the input number),
need to check every digit of number is it 4 or 7 can do that 
by get i modulus 10 to get last digit and check it till i = 0 (divide i by 10 each iteration)
every time you check if digit is lucky increase counter to know how many digits of number
is lucky by compare this counter by another one which you increase it in each iteration in loop
to get length of number then by comparing two counter (number of lucky digits & length of number)
you will know if it is lucky or not and if it is then get the modulus of input number by lucky number (i) 
if modulus = 0 this mean number is equal lucky number its self or it is not lucky but it divisble by lucky number 
both cases print yes otherwise no 
*/
int main()
{
    int num, temp, x = 0, len = 0;
    cin >> num;

    for (int i = 1; i <= 1000; i++) {
        temp = i;
        while (temp) {
            if (temp % 10 == 4 || temp % 10 == 7)
                x++;
            len++;
            temp /= 10;
        }
        if (len == x && num % i == 0)
        {
            cout << "YES";
            return 0;
        }
        len = 0, x = 0;
    }
    cout << "NO";

    return 0;
}