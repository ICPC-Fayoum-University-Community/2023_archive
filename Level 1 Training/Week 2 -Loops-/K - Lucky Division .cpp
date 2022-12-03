#include <iostream>
using namespace std;
/*
            -Lucky Division-
list all lucky number (its digits is 4 or 7 only) from 0 to 1000
 then get modulus of number on each lucky array items if modules = 0 
 then number is divisble by lucky number or number is equal to lucky number it self,
 print yes in this two cases else no.
*/
int main()
{
    int num, lucky[] = { 4,7,44,47,74,77,444,447,474,477,744,747,774,777 };
    cin >> num;
    for (int i = 0; i < 14; i++)
    {
        if (num % lucky[i] == 0)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";

    return 0;
}